//
// Created by Yassuan Foljanty Catanzaro on 27.10.25.
//

#include <stdio.h>

int logischeOperatoren() {
    if (1 && 1) printf("korrekt\n"); else printf("falsch\n");
    if (1 && 0) printf("korrekt\n"); else printf("falsch\n");
    if (0 && 1) printf("korrekt\n"); else printf("falsch\n");
    if (0 && 0) printf("korrekt\n"); else printf("falsch\n");
    if (1 || 1) printf("korrekt\n"); else printf("falsch\n");
    if (1 || 0) printf("korrekt\n"); else printf("falsch\n");
    if (0 || 1) printf("korrekt\n"); else printf("falsch\n");
    if (0 || 0) printf("korrekt\n"); else printf("falsch\n");
    if (!0)    printf("korrekt\n"); else printf("falsch\n");
    if (!1)    printf("korrekt\n"); else printf("falsch\n");
    if (!2)    printf("korrekt\n"); else printf("falsch\n");

    return 0;
}
