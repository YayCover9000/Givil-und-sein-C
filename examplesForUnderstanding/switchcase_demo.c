#include <stdio.h>
#include "switchcase_demo.h"
void run_switchcase_demo(void) {
    int wahl;
    printf("Gib eine Zahl 1..3 ein: ");
    if (scanf("%d", &wahl) != 1) { puts("Ungueltige Eingabe."); return; }
    switch (wahl) {
        case 1: puts("Du hast 1 gewaehlt."); break;
        case 2: puts("Du hast 2 gewaehlt."); break;
        case 3: puts("Du hast 3 gewaehlt."); break;
        default: puts("Ungueltige Wahl.");
    }
}
