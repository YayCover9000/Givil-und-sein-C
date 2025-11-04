#include <stdio.h>
#include "callByValue.h"
static void doSomething(int n) {
    n++;
    printf("Wert von n innerhalb der Funktion: %d\n", n);
}
void run_callByValue(void) {
    int x = 1;
    printf("Wert von x vor Funktionsaufruf: %d\n", x);
    doSomething(x);
    printf("Wert von x nach Funktionsaufruf: %d\n", x);
}
