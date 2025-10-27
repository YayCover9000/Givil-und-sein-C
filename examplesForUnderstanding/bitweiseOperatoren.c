//
// Created by Yassuan Foljanty Catanzaro on 27.10.25.
//

#include <stdio.h>

void printBits(short int n) {
    printf("%6d: ", n); // Erst den Dezimalwert mit etwas Platz
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        putchar((n & (1 << i)) ? '1' : '0');
        if (i % 4 == 0 && i != 0) putchar('.'); // Punkte nach 4 Bits, außer am Ende
    }
    printf("\n");
}
/*
*| Ausdruck                 | Bedeutung                                | Ergebnis (dez) | Bits (vereinfacht)  |
| ------------------------ | ---------------------------------------- | -------------- | ------------------- |
| `n`                      | Originalwert                             | 25             | 0000.0000.0001.1001 |
| `n << 3`                 | um 3 nach links (×8)                     | 200            | 0000.0000.1100.1000 |
| `n >> 2`                 | um 2 nach rechts (÷4)                    | 6              | 0000.0000.0000.0110 |
| `(n >> 2) << 2`          | Bits runden (löscht die letzten 2 Bits)  | 24             | 0000.0000.0001.1000 |
| `~n`                     | alle Bits invertieren                    | -26            | 1111.1111.1110.0110 |
| `(unsigned short int)~n` | gleiches Bitmuster, aber ohne Vorzeichen | 65510          | 1111.1111.1110.0110 |

 */

int bitweiseOperatoren() {
    short int n = 25;

    printBits(n);
    printBits(n << 3);
    printBits(n >> 2);
    printBits((n >> 2) << 2);
    printBits(~n);
    printBits((unsigned short int)~n);

    return 0;
}
