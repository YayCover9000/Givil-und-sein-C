//
// Created by Yassuan Foljanty Catanzaro on 27.10.25.
//

#include <stdio.h>

char global = 'g';

int gueltigkeitsbereich() {

    {
        char lokal = '1';
        printf("%c \n", lokal);
    }
        printf("%c \n", global);

    {
        int i = 5;
        printf("%d\n", i);
    }
    // printf("%c %d\n", lokal, i); // kann nicht gehen weil ist unbekannt

    return 0;
}