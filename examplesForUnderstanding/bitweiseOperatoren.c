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

/*
*| Operator | Symbol                                | Bedeutung                                                          | Beispiel                                         |    |     |
| -------- | ------------------------------------- | ------------------------------------------------------------------ | ------------------------------------------------ | -- | --- |
| **AND**  | `&`                                   | Bitweise **UND** — nur 1, wenn beide Bits 1 sind                   | `n & 35`                                         |    |     |
| **OR**   | `                                     | `                                                                  | Bitweise **ODER** — 1, wenn eines der Bits 1 ist | `n | 10` |
| **XOR**  | `^`                                   | Bitweise **exklusives ODER** — 1, wenn **nur eins** der Bits 1 ist | `n ^ 8`                                          |    |     |
| **0xFF** | Hexadezimal für **255** → `1111.1111` | `n ^ 0xFF` invertiert die unteren 8 Bits                           |                                                  |    |     |

 */

int bitweiseOperation2() {
    short int n = 61;

    printf("AND &\n");
    printBits(n);
    printBits(35);
    printBits(n & 35);

    printf("OR |\n");
    printBits(n);
    printBits(10);
    printBits(n | 10);

    printf("XOR ^\n");
    printBits(n);
    printBits(8);
    printBits(n ^ 8);

    printf("XOR 0xFF ^\n");
    printBits(n);
    printBits(0xFF);
    printBits(n ^ 0xFF);

    return 0;
}

