//
// Created by yfoljanty on 04/11/2025.
//


#include <stdio.h>

int facultaet() {
    int in;
    printf("Eingabe: ");
    scanf("%d", &in);
    printf("Das Ergebnis von %d! ist %d\n", in, faculR(in));
    return 0;
}

// recursive calculation of faculty
int faculR(int x) {
    int curr = 1;
    if (x > 0) curr = x * faculR(x - 1);
    return curr;
}
