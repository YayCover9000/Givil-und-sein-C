//
// Created by Yassuan Foljanty Catanzaro on 29.10.25.
//

#include <stdio.h>

int input() {

    printf("Sag, wen ich gruessen soll: ");
    char in[256];
    fgets(in, 256, stdin);
    printf("Hallo %s", in);
    return 0;
}