#include <stdio.h>
#include "examplesForUnderstanding/zweiTeiler.h"
#include "examplesForUnderstanding/primeZahl.h"
#include "examplesForUnderstanding/facultaet.h"
#include "examplesForUnderstanding/callByValue.h"
#include "examplesForUnderstanding/callByReference.h"
#include "examplesForUnderstanding/args_demo.h"
#include "examplesForUnderstanding/array_demo.h"
#include "examplesForUnderstanding/switchcase_demo.h"
#include "examplesForUnderstanding/struct_student.h"
#include "examplesForUnderstanding/typedef_demo.h"
#include "examplesForUnderstanding/struct_typedef_exam.h"
#include "examplesForUnderstanding/pointer_address_demo.h"
#include "examplesForUnderstanding/dynmem_demo.h"
#include "examplesForUnderstanding/fptr_demo.h"
#include "examplesForUnderstanding/strings_demo.h"
#include "examplesForUnderstanding/pointer_basics.h"
#include "examplesForUnderstanding/pointer_array_demo.h"
#include "examplesForUnderstanding/fptr_ops.h"

static void print_menu(void) {
    puts("\n=== Demo-Menue ===");
    puts(" 1) zweiTeiler (Teile durch 2 solange moeglich)");
    puts(" 2) Primzahltest");
    puts(" 3) Fakultaet (rekursiv)");
    puts(" 4) Call-by-Value");
    puts(" 5) Call-by-Reference (Pointer)");
    puts(" 6) Args-Demo (argc/argv)");
    puts(" 7) Array & Pointerarithmetik");
    puts(" 8) Switch/Case");
    puts(" 9) Struct: Student");
    puts("10) Typedef");
    puts("11) Struct + Typedef (Exam)");
    puts("12) Pointer & Adressen");
    puts("13) Dynamische Speicherverwaltung (malloc/realloc/free)");
    puts("14) Funktionszeiger");
    puts("15) Strings & Zeigerarithmetik (%%s, '\\0', *(p+n))");
    puts("16) Pointer-Basics (&, %%p, *-Operator)");
    puts("17) Pointer & Arrays (a[n] == *(a+n))");
    puts("18) Funktionszeiger (Ops umschalten)");
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
            case 1:  run_zweiTeiler(); break;
            case 2:  run_primeZahl(); break;
            case 3:  run_facultaet(); break;
            case 4:  run_callByValue(); break;
            case 5:  run_callByReference(); break;
            case 6:  run_args_demo(argc, argv); break;
            case 7:  run_array_demo(); break;
            case 8:  run_switchcase_demo(); break;
            case 9:  run_struct_student(); break;
            case 10: run_typedef_demo(); break;
            case 11: run_struct_typedef_exam(); break;
            case 12: run_pointer_address_demo(); break;
            case 13: run_dynmem_demo(); break;
            case 14: run_fptr_demo(); break;
            case 15: run_strings_demo(); break;
            case 16: run_pointer_basics(); break;
            case 17: run_pointer_array_demo(); break;
            case 18: run_fptr_ops(); break;
            case 0:  puts("Bye!"); return 0;
            default: puts("Ungueltige Auswahl."); break;
        }
    }
}
