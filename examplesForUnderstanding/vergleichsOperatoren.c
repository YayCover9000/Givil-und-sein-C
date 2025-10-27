//
// Created by Yassuan Foljanty Catanzaro on 27.10.25.
//

#include <stdio.h>

int vergleichsOperatoren() {

    if (1<2) printf("korrekt\n");
    printf("a: %d\n", 1>2);
    printf("b: %d\n", 1<1*5);
    printf("c: %d\n", 5*(1>=1));
    printf("d: %d\n", 'a' ==97);
    printf("e: %d\n", 0=='\0');
    float a = 1.2f*2e2;
    float b = 12*200/10;
    printf("f: %d %f != %f\n", a == b, a, b);
    float i = 1337.0f;
    int j = 1337;
    printf("g: %d\n", i==j);
    printf("i: %d\n", 1337==j++);
    printf("j: %d\n", 1337==--j);

    return 0;
}