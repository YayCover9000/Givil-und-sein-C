//
// Created by Yassuan Foljanty Catanzaro on 29.10.25.
//

#include <stdio.h>
#include <stdlib.h>

int ifStatement(void) {
    srand(1231); // Init with stationary seed, attention danger

    for (int i = 0; i < 10; i++) {
        int r = rand()%10;
        printf("%d:\t", r);
        if (r==4) {
            printf("Eine Vier!\n");
        } else if (r==5) {
            printf("Eine Fuenf!\n");
        } else {
            (r>5) ? printf("Mehr als fuenf\n") : printf("weniger als vier\n");
        }
    }
    return 0;
}
