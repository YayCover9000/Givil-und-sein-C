#include <stdio.h>
#include "array_demo.h"
void run_array_demo(void) {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    printf("a[2] = %d, *(p+2) = %d\n", a[2], *(p+2));
    for (int *it = a; it < a + 5; ++it) {
        printf("Wert: %d (Adresse: %p)\n", *it, (void*)it);
    }
}
