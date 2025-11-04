#include <stdio.h>
#include "callByReference.h"

/* Übergeben wird die ADRESSE der Variable (Pointer).
 * (*p) dereferenziert und greift auf den Wert an der Adresse zu. */
static void inc_in_place(int *p) {
    if (p) (*p)++;
}

void run_callByReference(void) {
    int x = 1;
    printf("Vorher: x = %d\n", x);
    inc_in_place(&x); // &x = Adresse von x
    printf("Nachher: x = %d\n", x); // jetzt 2
}
