#include <stdio.h>
#include "array_demo.h"

void run_array_demo(void) {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a; // "Array decays to pointer": p zeigt auf a[0]
    printf("a[2] = %d, *(p+2) = %d (gleich)\n", a[2], *(p + 2));

    // Iteration per Pointer statt Index
    for (int *it = a; it < a + 5; ++it) {
        printf("Wert: %d (Adresse: %p)\n", *it, (void*)it);
    }
}
