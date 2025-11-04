#include <stdio.h>
#include "args_demo.h"

void run_args_demo(int argc, char **argv) {
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; ++i) {
        printf("argv[%d] = \"%s\"\n", i, argv[i]); // argv[i] zeigt auf C-String (char*)
    }
}
