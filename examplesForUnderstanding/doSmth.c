#include <stdio.h>
#include "callByValue.h"

/* doSomething bekommt eine KOPIE (Call-by-Value). */
static void doSomething(int n) {
    n++; // ändert nur die lokale Kopie
    printf("Wert von n innerhalb der Funktion: %d\n", n);
}

void run_callByValue(void) {
    int x = 1;
    printf("Wert von x vor Funktionsaufruf: %d\n", x);
    doSomething(x); // nur Kopie wird erhöht
    printf("Wert von x nach Funktionsaufruf: %d\n", x); // bleibt 1
}
