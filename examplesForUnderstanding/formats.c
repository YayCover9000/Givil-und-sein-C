//
// Created by Yassuan Foljanty Catanzaro on 27.10.25.
//

#include <stdio.h>
int formats() {
    printf("Hallo Welt\n");

    char big[] = "grosse";
    printf("Hallo %s Welt\n", big);

    int a = 1;
    printf("%d\n", a);
    printf("1+1 ergibt %d\n", ++a);

    float b = 2.567f;
    printf("%d + %f = %.2f\n", a, b, a+b);
    puts("            ===");

    return 0;
}