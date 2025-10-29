//
// Created by Yassuan Foljanty Catanzaro on 29.10.25.
//

#include <stdio.h>

int escape() {
    printf("Hallo ueberschriebene Welt \r"); // jumps back to intex 0 and is therfor not shown
    printf("Salut\n");
    printf("Hallo \alaute Welt\n");
    printf("Hallo \tTab \tWelt\n");
    printf("Hallo Sonderzeichen \\ \? \'\n");
    printf("\110\141\154\154\157 oktale Welt\n");
    printf("\x48\x61\x6C\x6C\x6F hexadezimale Welt\n");
    printf("Hallo Windows Welt\r\n"); // jumps back to index zero and then line space
    printf("Hallo Unix Welt\n");
    printf("Hallo MacOS Welt\r");
    printf("\n");

    return 0;
}