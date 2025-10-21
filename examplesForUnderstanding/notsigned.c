//
// Created by Yassuan Foljanty Catanzaro on 21.10.25.
//
#include <stdio.h>

int notsigned () {
    signed char x = -5;
    unsigned char y;
    y = x; // gleiche bits aber unterschiedliche Darstellung

    printf("%d \n", x); // Ausgabe: -5: 1111 1011
    printf("%u \n", y); // Ausgabe: 251: 1111 1011

    return 0;
}