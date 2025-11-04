//
// Created by yfoljanty on 04/11/2025.
//

#include <stdio.h>

int isPrime(int x);  // forward declaration

int primeZahl(void) {
    int in;
    printf("Welche Zahl soll geprueft werden?: ");
    scanf("%d", &in);
    isPrime(in) ? printf("%d ist eine Primzahl.\n", in)
                : printf("%d ist keine Primzahl.\n", in);
    return 0;
}

int isPrime(int x) {
    if (x <= 1) return 0;      // negatives, 0 and 1 are not prime
    if (x == 2) return 1;      // 2 is the only even prime
    if (x % 2 == 0) return 0;  // even > 2 is not prime

    for (int i = 3; i <= x / i; i += 2) { // check odd divisors up to sqrt(x)
        if (x % i == 0) return 0;
    }
    return 1;
}
