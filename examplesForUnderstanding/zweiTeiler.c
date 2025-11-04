//
// Created by yfoljanty on 04/11/2025.
//
#include <stdio.h>

int zweiTeiler(void) {
    int n;
    do {
        printf("Bitte eine gerade Zahl eingeben: ");
        scanf("%i", &n);
    } while (n % 2 != 0);

    while (n % 2 == 0) {
        printf("Die Zahl %d ist durch Zwei teilbar.\n", n);
        n /= 2;
    }
    printf("Die Zahl %d ist nicht mehr durch zwei teilbar", n);

    return 0;
}
