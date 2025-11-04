#include <stdio.h>
#include <string.h>
#include <ctype.h>

int switchCase1(void) {
    char in[256];

    // Prompt (optional)
     printf("Enter args (space-separated): ");

    if (!fgets(in, sizeof in, stdin)) {
        puts("No input.");
        return 0;
    }

    // Strip newline(s)
    in[strcspn(in, "\r\n")] = '\0';

    // Count tokens (args) separated by whitespace
    int count = 0;
    for (char *p = in; *p;) {
        while (*p && isspace((unsigned char)*p)) p++;   // skip spaces
        if (*p) {
            count++;
            while (*p && !isspace((unsigned char)*p)) p++; // skip token
        }
    }

    switch (count) {
        case 0:
            puts("No tokens entered.");
            break;
        case 1:
            puts("One token entered.");
            break;
        case 2:
            puts("Two tokens entered.");
            break;
        default:
            printf("%d tokens entered.\n", count);
            break;
    }

    printf("Hallo %s\n", in);
    return 0;
}
