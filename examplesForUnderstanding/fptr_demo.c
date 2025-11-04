#include <stdio.h>
#include "fptr_demo.h"
static int add1(int x) { return x + 1; }
static int quad(int x) { return x * x; }
void run_fptr_demo(void) {
    int v = 5;
    int (*op)(int) = add1;
    printf("add1(%d) = %d\n", v, op(v));
    op = quad;
    printf("quad(%d) = %d\n", v, op(v));
}
