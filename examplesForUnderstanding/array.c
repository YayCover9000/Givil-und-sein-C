//
// Created by Yassuan Foljanty Catanzaro on 27.10.25.
//

#include <stdio.h>

int array() {
    int data[] = {0, 8, 15, 47, 11};
    int length = sizeof(data) / sizeof(data[0]); // Hier steht Information über die größe des Arrays

    printf("Das Array hat %d Elemente.\n", length);
    printf("Inhalt erstes Element:\t%d\n", data[0]);

    int sum = 0;
    for (int i = 0; i < length; i++) {
        printf("Inhalt Element %d:\t%d\n", i, data[i]);
        sum += data[i];
    }

    printf("Die Summe aller Elemente ist %d.\n", sum);
    printf("Der Durchschnitt aller Elemente ist %.2f.\n", (float)sum / length);

    return 0;
}
