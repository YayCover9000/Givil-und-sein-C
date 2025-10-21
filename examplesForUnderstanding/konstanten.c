//
// Created by Yassuan Foljanty Catanzaro on 21.10.25.
//

#include <stdio.h>
#define PI 3.141

int konstanten(void) {
    const float pi = 3.141;

    printf("Pi %.3f %d bytes\n", pi, sizeof(pi));
    printf("PI %.3f %d bytes\n", PI, sizeof(PI));

    return 0;
}