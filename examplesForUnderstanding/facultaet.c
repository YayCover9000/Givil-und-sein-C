#include <stdio.h>
#include "facultaet.h"
static int facultaet(int n) { return (n <= 1) ? 1 : n * facultaet(n - 1); }
void run_facultaet(void) {
    int in;
    printf("Eingabe (n >= 0): ");
    if (scanf("%d", &in) != 1 || in < 0) { puts("Ungueltige Eingabe."); return; }
    printf("Das Ergebnis von %d! ist %d\n", in, facultaet(in));
}
