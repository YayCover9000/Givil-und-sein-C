//
// Created by Yassuan Foljanty Catanzaro on 29.10.25.
//

#include <stdio.h>

int forloop() {

    for (int i = 0; i <= 5; i++) {
        if (i==2) continue;
        printf("%d\n", i);
    }
    return 0;
}