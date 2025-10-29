//
// Created by Yassuan Foljanty Catanzaro on 29.10.25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "chess_rudementary.h"

#define SIZE 8

static char board[SIZE][SIZE];
static int currentPlayer = 1; // 1 = Weiß, 2 = Schwarz

// Initialisiert das Schachbrett
static void init_board(void) {
    const char *init[8] = {
        "rnbqkbnr",
        "pppppppp",
        "........",
        "........",
        "........",
        "........",
        "PPPPPPPP",
        "RNBQKBNR"
    };
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            board[i][j] = init[i][j];
}

// Druckt das aktuelle Brett
static void print_board(void) {
    printf("\n    a   b   c   d   e   f   g   h\n");
    printf("  +---+---+---+---+---+---+---+---+\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d |", 8 - i);
        for (int j = 0; j < SIZE; j++) {
            printf(" %c |", board[i][j]);
        }
        printf(" %d\n", 8 - i);
        printf("  +---+---+---+---+---+---+---+---+\n");
    }
    printf("    a   b   c   d   e   f   g   h\n");
    printf("Aktueller Spieler: %s\n", currentPlayer == 1 ? "Weiß (Großbuchstaben)" : "Schwarz (Kleinbuchstaben)");
}

// Wandelt ein Feld wie „e2“ in Koordinaten um
static int parse_pos(const char *pos, int *row, int *col) {
    if (strlen(pos) != 2) return 0;
    *col = tolower(pos[0]) - 'a';
    *row = 8 - (pos[1] - '0');
    return (*row >= 0 && *row < 8 && *col >= 0 && *col < 8);
}

// Führt einen Zug aus (einfach: keine Regelprüfung)
static int move_piece(const char *from, const char *to) {
    int r1, c1, r2, c2;
    if (!parse_pos(from, &r1, &c1) || !parse_pos(to, &r2, &c2)) return 0;

    char piece = board[r1][c1];
    if (piece == '.') return 0;

    // einfache Spielerprüfung
    if (currentPlayer == 1 && !isupper(piece)) return 0;
    if (currentPlayer == 2 && !islower(piece)) return 0;

    board[r1][c1] = '.';
    board[r2][c2] = piece;
    currentPlayer = 3 - currentPlayer;
    return 1;
}

// Hauptspiel-Schleife
void start_chess_rudementary(void) {
    char from[3], to[3];

    init_board();

    printf("=== Einfaches C-Schach ===\n");
    printf("Beispielzug: e2 e4\n");
    printf("Beenden mit: exit\n");

    while (1) {
        print_board();
        printf("Zug (%s): ", currentPlayer == 1 ? "Weiß" : "Schwarz");
        if (scanf("%2s", from) != 1) break;
        if (strcmp(from, "exit") == 0) break;
        if (scanf("%2s", to) != 1) break;
        if (!move_piece(from, to)) {
            printf("Ungültiger Zug! Versuche erneut.\n");
        }
    }

    printf("Spiel beendet.\n");
}
