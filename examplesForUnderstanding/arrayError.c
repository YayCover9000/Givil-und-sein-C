//
// Created by Yassuan Foljanty Catanzaro on 27.10.25.
//

#include <stdio.h>

int arrayError() {
    int data_2[5];

    data_2[0] = 0;
    data_2[1] = 8;
    data_2[2] = 15;
    data_2[3] = 47;
    //data_2[4] = 50;

    int length = sizeof(data_2) / sizeof(data_2[0]);
    printf("Das Array hat %d Elemente und ist %d Byte gross.\n", length, (int)sizeof(data_2));

    printf("Inhalt fünftes Element:\t%d\n", data_2[4]);
    // Zugriff auf data[5] vermeiden! → außerhalb des Arrays!
     printf("Inhalt sechstes Element:\t%d\n", data_2[5]);

    int sum = 0;
    for (int i = 0; i < length; i++) {
        printf("%d ", i);
        sum += data_2[i];
    }

    printf("\nSumme aller Elemente: %d\n", sum);

    return 0;
}
