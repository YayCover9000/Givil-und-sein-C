#include <stdio.h>
#include "zweiTeiler.h"
void run_zweiTeiler(void) {
    int n;
    do {
        printf("Bitte eine gerade Zahl eingeben: ");
        if (scanf("%d", &n) != 1) { puts("Ungueltige Eingabe."); return; }
    } while (n % 2 != 0);
    while (n % 2 == 0) {
        printf("Die Zahl %d ist durch Zwei teilbar.\n", n);
        n /= 2;
    }
    printf("Die Zahl %d ist nicht mehr durch zwei teilbar\n", n);
}
