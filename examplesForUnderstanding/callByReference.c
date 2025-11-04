#include <stdio.h>
#include "callByReference.h"
static void inc_in_place(int *p) { if (p) (*p)++; }
void run_callByReference(void) {
    int x = 1;
    printf("Vorher: x = %d\n", x);
    inc_in_place(&x);
    printf("Nachher: x = %d\n", x);
}
