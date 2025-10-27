//
// Created by Yassuan Foljanty Catanzaro on 27.10.25.
//

#include <stdio.h>



int casting() {
    int x = 8;
    int y = 3;
    printf("%d˜\n", x/y);
    printf("%f/n", x/y);
    float z = x/y;
    printf("%f\n", z);
    printf("%f\n", (float)x/y);

    int u = 40000;
    printf("%d\n", (short int) u);

    int v = -1;
    unsigned int w = 1;
    if (v>w) printf("Achtung Falle!\n");

    return 0;
}