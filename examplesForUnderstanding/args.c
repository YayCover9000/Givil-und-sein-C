//
// Created by Yassuan Foljanty Catanzaro on 29.10.25.
//

/// make sure to go into the right directory
/// cd /Users/yassuanfoljantycatanzaro/CLionProjects/givil-und-sein-C/cmake-build-debug
/// ./main hallo test 42

#include <stdio.h>
#include "args.h"

int args(int argc, char *argv[]) {
    printf("Anzahl der Argumente = %d\n", argc);
    printf("Name der exe = %s\n", argv[0]);

    for (int i = 1; i < argc; i++) {
        printf("arg%d\t= %s\n", i, argv[i]);
    }
    return 1337;
}
