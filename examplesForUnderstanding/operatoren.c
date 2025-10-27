//
// Created by Yassuan Foljanty Catanzaro on 27.10.25.
//

/*
*Arithmetische Operatoren
• +, -, *, /, %
• + und - als Vorzeichen
• ++ und -- als In-/Dekrement
• Vergleichsoperatoren
• <,>,<=,>=,==, !=
• Logische Operatoren
• !, &&, ||
• Bitweise Operatoren
• ~, &, |, ^, <<, >>
• Zuweisungsoperatoren
• Kombination aus = und
arithmetischem oder bitweisem
Operator
 */

#include <stdio.h>

int operatoren() {
  int sum = 10 + 20; // 30
    sum +=2;  // 32
    float result = (++sum / 11 - 1) * 2; // 4
    result --;
    result *= 4;
    result = (int) result % 7;
  printf("%d %f \n", sum, result);

    return 0;
}