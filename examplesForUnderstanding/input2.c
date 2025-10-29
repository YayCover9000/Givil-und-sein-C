//
// Created by Yassuan Foljanty Catanzaro on 29.10.25.
//

#include <stdio.h>
#include <math.h>

int input2() {
    printf("Bitte Hex-Code der Farbe eingeben: ");
    int a,b,c;
    scanf("#%2x%2x%2x", &a, &b, &c);
    printf("Die RGB-Werte lauten R: %d G: %d B: %d\n", a,b,c);
    double luminosity = sqrt(0.299*a*a + 0.587*b*b + 0.114*c*c);
    printf("Der Helligkeitswert der Farbe ist: %.0f", luminosity);
    return 0;
}