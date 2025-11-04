#include <stdio.h>
#include "pointer_array_demo.h"
void run_pointer_array_demo(void) {
    int a[5] = {10,20,30,40,50};
    int *p = a;
    printf("a[3] = %d, *(p+3) = %d\n", a[3], *(p+3));
    printf("Lauf mit Zeiger (Adresse -> Wert):\n");
    for (int *it = a; it < a+5; ++it) {
        printf("%p -> %d\n", (void*)it, *it);
    }
}
