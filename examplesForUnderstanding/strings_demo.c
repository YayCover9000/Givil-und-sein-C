#include <stdio.h>
#include <string.h>
#include "strings_demo.h"
void run_strings_demo(void) {
    char text[] = "Array";
    char *p = text;
    printf("text: %s\n", text);
    printf("*(p+2) = %c, text[2] = %c\n", *(p+2), text[2]);
    printf("Zeigerlauf: ");
    for (char *it = text; *it != '\0'; ++it) {
        putchar(*it);
        putchar(' ');
    }
    putchar('\n');
}
