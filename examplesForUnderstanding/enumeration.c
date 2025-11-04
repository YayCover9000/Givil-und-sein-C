//
// Created by Yassuan Foljanty Catanzaro on 04.11.25.
//

#include <stdio.h>

const enum timeOfYear {
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
    };

int enumeration() {
    enum timeOfYear check = AUTUMN;
    printf("%d\n", check);

    switch (check) {
        case AUTUMN:
            printf("Herbst\n"); break;
        case SPRING:
            printf("Frühling\n"); break;
        case SUMMER:
            printf("Sommer\n"); break;
        case WINTER:
            printf("Winter\n"); break;
        default: printf("default\n");
    }
    return check;
}