#include <stdio.h>
#include "fptr_ops.h"
static int add1(int x) { return x + 1; }
static int sqr(int x)  { return x * x; }
void run_fptr_ops(void) {
    int v = 6;
    int (*op)(int) = add1;
    printf("add1(%d) = %d\n", v, op(v));
    op = sqr;
    printf("sqr(%d)  = %d\n", v, op(v));
}
