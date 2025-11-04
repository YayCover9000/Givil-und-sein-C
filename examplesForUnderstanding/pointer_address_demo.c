#include <stdio.h>
#include "pointer_address_demo.h"
void run_pointer_address_demo(void) {
    int x = 42;
    int *px = &x;
    printf("Wert x = %d\n", x);
    printf("Adresse von x = %p\n", (void*)&x);
    printf("px (Adresse) = %p, *px (Wert) = %d\n", (void*)px, *px);
    *px = 99;
    printf("Nach *px=99: x = %d\n", x);
}
