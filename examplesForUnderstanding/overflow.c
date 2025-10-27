//
// Created by Yassuan Foljanty Catanzaro on 21.10.25.
//


#include <stdio.h>
#include <limits.h>

int overflow() {
    short int a = 1;
    short int b = SHRT_MAX;
    short int c = a + b;

    printf("%d + %d = %d \n" , a, b, c);

    return 0;
}