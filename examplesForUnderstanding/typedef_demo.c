#include <stdio.h>
#include "typedef_demo.h"
typedef unsigned short      small;
typedef unsigned long long  large;
void run_typedef_demo(void) {
    small a = 42;
    large b = 123456789ULL;
    printf("small a = %hu (sizeof(small)=%zu)\n", a, sizeof(small));
    printf("large b = %llu (sizeof(large)=%zu)\n", b, sizeof(large));
}
