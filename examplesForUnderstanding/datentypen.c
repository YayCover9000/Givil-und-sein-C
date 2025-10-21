//
// Created by Yassuan Foljanty Catanzaro on 21.10.25.
//
#include <stdio.h>

int datentypen(void) {
    char a;
    int x, y, z;
    float n = 0.1;

    a = 'A';
    x = y = 2;
    z = x + y +1;
    n = a/z;

    printf("%f", n);

    return 0;
}