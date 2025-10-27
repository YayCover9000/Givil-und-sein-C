//
// Created by Yassuan Foljanty Catanzaro on 27.10.25.
//

#include <stdio.h>

int literale() {
    // 1️⃣ String mit automatischer Terminierung
    char text[] = "hallo";
    printf("%s %d\n", text, sizeof(text));

    // 2️⃣ Manuell aufgebauter String (noch ohne '\0')
    char text2[6];
    text2[0] = 'h';
    text2[1] = 'a';
    text2[2] = 'l';
    text2[3] = 'l';
    text2[4] = 'o';

    printf("%s %d\n", text2, sizeof(text2));  // ❌ Noch kein '\0'!

    text2[5] = '\0';  // ✅ Jetzt richtig terminiert
    printf("%s %d\n", text2, sizeof(text2));

    // 3️⃣ Explizit als Zeichen-Array mit '\0'
    char text3[] = {'h', 'a', 'l', 'l', 'o', '\0'};
    printf("%s %d\n", text3, sizeof(text3));

    return 0;
}
