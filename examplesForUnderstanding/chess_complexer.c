//
// Created by Yassuan Foljanty Catanzaro on 29.10.25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "chess_complexer.h"

#define SIZE 8

typedef enum { WHITE, BLACK } Player;
typedef enum { EMPTY, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING } PieceType;

typedef struct {
    PieceType type;
    Player color;
    int moved; // für Rochade und Bauern-Erstzug
} Piece;

static Piece board[SIZE][SIZE];
static Player currentPlayer = WHITE;

static const char *piece_symbols = ".PNBRQKpnbrqk";

// --------------------------------------------------
// Hilfsfunktionen
// --------------------------------------------------

static void clear_board(void) {
    for (int r = 0; r < SIZE; r++)
        for (int c = 0; c < SIZE; c++)
            board[r][c] = (Piece){EMPTY, WHITE, 0};
}

static void init_board(void) {
    clear_board();
    for (int i = 0; i < SIZE; i++) {
        board[1][i] = (Piece){PAWN, BLACK, 0};
        board[6][i] = (Piece){PAWN, WHITE, 0};
    }

    PieceType backrank[8] = {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK};
    for (int i = 0; i < SIZE; i++) {
        board[0][i] = (Piece){backrank[i], BLACK, 0};
        board[7][i] = (Piece){backrank[i], WHITE, 0};
    }
}

static char piece_char(Piece p) {
    if (p.type == EMPTY) return '.';
    char c;
    switch (p.type) {
        case PAWN: c = 'P'; break;
        case KNIGHT: c = 'N'; break;
        case BISHOP: c = 'B'; break;
        case ROOK: c = 'R'; break;
        case QUEEN: c = 'Q'; break;
        case KING: c = 'K'; break;
        default: c = '?';
    }
    return (p.color == WHITE) ? c : tolower(c);
}

static void print_board(void) {
    printf("\n    a   b   c   d   e   f   g   h\n");
    printf("  +---+---+---+---+---+---+---+---+\n");
    for (int r = 0; r < SIZE; r++) {
        printf("%d |", 8 - r);
        for (int c = 0; c < SIZE; c++) {
            printf(" %c |", piece_char(board[r][c]));
        }
        printf(" %d\n", 8 - r);
        printf("  +---+---+---+---+---+---+---+---+\n");
    }
    printf("    a   b   c   d   e   f   g   h\n");
    printf("Zug: %s\n", currentPlayer == WHITE ? "Weiß" : "Schwarz");
}

// --------------------------------------------------
// Positions-Parsing
// --------------------------------------------------

static int parse_pos(const char *str, int *row, int *col) {
    if (strlen(str) != 2) return 0;
    *col = tolower(str[0]) - 'a';
    *row = 8 - (str[1] - '0');
    return (*col >= 0 && *col < 8 && *row >= 0 && *row < 8);
}

// --------------------------------------------------
// Bewegungslogik – nur legale Züge
// --------------------------------------------------

static int is_empty(int r, int c) {
    return board[r][c].type == EMPTY;
}

static int same_color(Piece a, Piece b) {
    if (a.type == EMPTY || b.type == EMPTY) return 0;
    return a.color == b.color;
}

static int path_clear(int r1, int c1, int r2, int c2) {
    int dr = (r2 > r1) ? 1 : (r2 < r1 ? -1 : 0);
    int dc = (c2 > c1) ? 1 : (c2 < c1 ? -1 : 0);
    int r = r1 + dr, c = c1 + dc;
    while (r != r2 || c != c2) {
        if (!is_empty(r, c)) return 0;
        r += dr; c += dc;
    }
    return 1;
}

static int valid_move(int r1, int c1, int r2, int c2) {
    Piece p = board[r1][c1];
    if (p.type == EMPTY) return 0;
    if (same_color(board[r1][c1], board[r2][c2])) return 0;

    int dr = r2 - r1;
    int dc = c2 - c1;

    switch (p.type) {
        case PAWN:
            if (p.color == WHITE) {
                if (dc == 0 && dr == -1 && is_empty(r2, c2)) return 1;
                if (dc == 0 && dr == -2 && r1 == 6 && is_empty(5, c2) && is_empty(r2, c2)) return 1;
                if (abs(dc) == 1 && dr == -1 && !is_empty(r2, c2) && board[r2][c2].color == BLACK) return 1;
            } else {
                if (dc == 0 && dr == 1 && is_empty(r2, c2)) return 1;
                if (dc == 0 && dr == 2 && r1 == 1 && is_empty(2, c2) && is_empty(r2, c2)) return 1;
                if (abs(dc) == 1 && dr == 1 && !is_empty(r2, c2) && board[r2][c2].color == WHITE) return 1;
            }
            return 0;

        case KNIGHT:
            return (abs(dr) == 2 && abs(dc) == 1) || (abs(dr) == 1 && abs(dc) == 2);

        case BISHOP:
            return abs(dr) == abs(dc) && path_clear(r1, c1, r2, c2);

        case ROOK:
            return ((dr == 0 || dc == 0) && path_clear(r1, c1, r2, c2));

        case QUEEN:
            return ((abs(dr) == abs(dc) || dr == 0 || dc == 0) && path_clear(r1, c1, r2, c2));

        case KING:
            if (abs(dr) <= 1 && abs(dc) <= 1) return 1;
            // Rochade
            if (dr == 0 && abs(dc) == 2) {
                int dir = (dc > 0) ? 1 : -1;
                int rook_col = (dc > 0) ? 7 : 0;
                if (board[r1][rook_col].type == ROOK && board[r1][rook_col].moved == 0) {
                    if (path_clear(r1, c1, r1, rook_col)) return 1;
                }
            }
            return 0;

        default:
            return 0;
    }
}

// --------------------------------------------------
// Check & Checkmate
// --------------------------------------------------

static int in_bounds(int r, int c) { return r >= 0 && r < 8 && c >= 0 && c < 8; }

static int is_king_in_check(Player color) {
    int kr = -1, kc = -1;
    // König suchen
    for (int r = 0; r < 8; r++)
        for (int c = 0; c < 8; c++)
            if (board[r][c].type == KING && board[r][c].color == color)
                kr = r, kc = c;

    // prüfen, ob Gegner ihn angreift
    for (int r = 0; r < 8; r++)
        for (int c = 0; c < 8; c++)
            if (board[r][c].type != EMPTY && board[r][c].color != color)
                if (valid_move(r, c, kr, kc))
                    return 1;
    return 0;
}

static int has_legal_move(Player color) {
    for (int r1 = 0; r1 < 8; r1++)
        for (int c1 = 0; c1 < 8; c1++)
            if (board[r1][c1].type != EMPTY && board[r1][c1].color == color)
                for (int r2 = 0; r2 < 8; r2++)
                    for (int c2 = 0; c2 < 8; c2++) {
                        if (!valid_move(r1, c1, r2, c2)) continue;
                        Piece save_from = board[r1][c1];
                        Piece save_to = board[r2][c2];
                        board[r2][c2] = save_from;
                        board[r1][c1] = (Piece){EMPTY, WHITE, 0};
                        int check = is_king_in_check(color);
                        board[r1][c1] = save_from;
                        board[r2][c2] = save_to;
                        if (!check) return 1;
                    }
    return 0;
}

// --------------------------------------------------
// Zug ausführen
// --------------------------------------------------

static int move_piece(const char *from, const char *to) {
    int r1, c1, r2, c2;
    if (!parse_pos(from, &r1, &c1) || !parse_pos(to, &r2, &c2)) return 0;
    Piece p = board[r1][c1];
    if (p.type == EMPTY || p.color != currentPlayer) return 0;
    if (!valid_move(r1, c1, r2, c2)) return 0;

    Piece backup_from = board[r1][c1];
    Piece backup_to = board[r2][c2];

    board[r2][c2] = board[r1][c1];
    board[r1][c1] = (Piece){EMPTY, WHITE, 0};
    board[r2][c2].moved = 1;

    if (is_king_in_check(currentPlayer)) {
        board[r1][c1] = backup_from;
        board[r2][c2] = backup_to;
        return 0;
    }

    // Bauernumwandlung
    if (p.type == PAWN && (r2 == 0 || r2 == 7)) {
        board[r2][c2].type = QUEEN;
    }

    currentPlayer = (currentPlayer == WHITE) ? BLACK : WHITE;
    return 1;
}

// --------------------------------------------------
// Hauptspiel
// --------------------------------------------------

void chess_complexer(void) {
    init_board();
    char from[10], to[10];

    printf("=== Terminal-Schach (Vollversion) ===\n");
    printf("Beispiel: e2 e4 | exit zum Beenden\n");

    while (1) {
        print_board();
        if (is_king_in_check(currentPlayer)) {
            if (!has_legal_move(currentPlayer)) {
                printf("SCHACHMATT! %s verliert.\n",
                       currentPlayer == WHITE ? "Weiß" : "Schwarz");
                break;
            } else {
                printf("Schach gegen %s!\n",
                       currentPlayer == WHITE ? "Weiß" : "Schwarz");
            }
        } else if (!has_legal_move(currentPlayer)) {
            printf("PATT! Unentschieden.\n");
            break;
        }

        printf("Zug (%s): ", currentPlayer == WHITE ? "Weiß" : "Schwarz");
        if (scanf("%9s", from) != 1) break;
        if (strcmp(from, "exit") == 0) break;
        if (scanf("%9s", to) != 1) break;

        if (!move_piece(from, to)) {
            printf("❌ Ungültiger Zug! Versuche erneut.\n");
        }
    }

    printf("Spiel beendet.\n");
}
