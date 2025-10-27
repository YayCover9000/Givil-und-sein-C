//
// Created by Yassuan Foljanty Catanzaro on 21.10.25
//
#include  <stdio.h>

int hexaOverflow() {
    int a = 1;
    a = a + 010; //+8
    a = a + 0xF; //+15
    a = a - 10ul; //-10


    printf("%d\n", a);

    float b = 1.2f;
    b = b * 2e2;

    printf("%f\n", b);

    return 0;
}