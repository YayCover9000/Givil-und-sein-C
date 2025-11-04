#include <stdio.h>
#include "pointer_basics.h"
static void inc_in_place(int *p) { if (p) (*p)++; }
void run_pointer_basics(void) {
    int x = 42;
    int *px = &x;
    printf("x=%d, &x=%p\n", x, (void*)&x);
    printf("px=%p, *px=%d\n", (void*)px, *px);
    inc_in_place(&x);
    printf("nach inc_in_place: x=%d\n", x);
}
