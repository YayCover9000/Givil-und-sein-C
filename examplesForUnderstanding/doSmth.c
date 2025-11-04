//
// Created by yfoljanty on 04/11/2025.
//

#include <stdio.h>

void doSomething(int n) {
    n++;
    printf("Wert von n innerhalb der Funktion %d\n", n);
}

int doSmth(void) {
    int x = 1;
    printf("Wert von x vor Funktionsaufruf %d\n", x);
    doSomething(x);
    printf("Wert von x nach zweitem Funktionsaufruf %d\n", x);
    return 0;
}
