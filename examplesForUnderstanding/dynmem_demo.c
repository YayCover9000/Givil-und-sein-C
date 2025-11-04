#include <stdio.h>
#include <stdlib.h>
#include "dynmem_demo.h"
void run_dynmem_demo(void) {
    int n = 5;
    int *a = (int*)malloc((size_t)n * sizeof *a);
    if (!a) { puts("malloc fehlgeschlagen"); return; }
    for (int i = 0; i < n; ++i) a[i] = (i + 1) * 10;
    printf("Initial: ");
    for (int i = 0; i < n; ++i) printf("%d ", a[i]); puts("");
    int newn = n * 2;
    int *tmp = (int*)realloc(a, (size_t)newn * sizeof *a);
    if (!tmp) { free(a); puts("realloc fehlgeschlagen"); return; }
    a = tmp;
    for (int i = n; i < newn; ++i) a[i] = (i + 1) * 10;
    printf("Nach realloc: ");
    for (int i = 0; i < newn; ++i) printf("%d ", a[i]); puts("");
    free(a);
}
