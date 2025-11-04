#include <stdio.h>
#include "examplesForUnderstanding/zweiTeiler.h"
#include "examplesForUnderstanding/primeZahl.h"
#include "examplesForUnderstanding/facultaet.h"
#include "examplesForUnderstanding/callByValue.h"
#include "examplesForUnderstanding/callByReference.h"
#include "examplesForUnderstanding/args_demo.h"
#include "examplesForUnderstanding/array_demo.h"
#include "examplesForUnderstanding/switchcase_demo.h"

static void print_menu(void) {
    puts("\n=== Demo-Menue ===");
    puts(" 1) zweiTeiler (Teile durch 2 solange moeglich)");
    puts(" 2) Primzahltest");
    puts(" 3) Fakultät (rekursiv)");
    puts(" 4) Call-by-Value");
    puts(" 5) Call-by-Reference (Pointer)");
    puts(" 6) Args-Demo (argc/argv)");
    puts(" 7) Array & Pointerarithmetik");
    puts(" 8) Switch/Case");
    puts(" 0) Ende");
    printf("Auswahl: ");
}

int main(int argc, char **argv) {
    for (;;) {
        int sel = -1;
        print_menu();
        if (scanf("%d", &sel) != 1) {
            puts("Eingabefehler. Tschuess.");
            return 0;
        }
        switch (sel) {
            case 1: run_zweiTeiler(); break;
            case 2: run_primeZahl(); break;
            case 3: run_facultaet(); break;
            case 4: run_callByValue(); break;
            case 5: run_callByReference(); break;
            case 6: run_args_demo(argc, argv); break;
            case 7: run_array_demo(); break;
            case 8: run_switchcase_demo(); break;
            case 0: puts("Bye!"); return 0;
            default: puts("Ungueltige Auswahl."); break;
        }
    }
}
