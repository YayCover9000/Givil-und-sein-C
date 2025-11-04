#include <stdio.h>
#include "primeZahl.h"
static int isPrime(int x) {
    if (x <= 1) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    for (int i = 3; i <= x / i; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}
void run_primeZahl(void) {
    int in;
    printf("Welche Zahl soll geprueft werden?: ");
    if (scanf("%d", &in) != 1) { puts("Ungueltige Eingabe."); return; }
    printf(isPrime(in) ? "%d ist eine Primzahl.\n" : "%d ist keine Primzahl.\n", in);
}
