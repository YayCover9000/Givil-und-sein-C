#include <stdio.h>
#include "zweiTeiler.h"

void run_zweiTeiler(void) {
    int n;

    /* do-while: wird MINDESTENS einmal ausgeführt. Wir erzwingen eine gerade Zahl.
     * scanf schreibt an die Adresse &n (=> n wird gefüllt). */
    do {
        printf("Bitte eine gerade Zahl eingeben: ");
        if (scanf("%d", &n) != 1) {
            puts("Ungueltige Eingabe.");
            return;
        }
    } while (n % 2 != 0);

    /* Solange n gerade ist, teilen wir es durch 2. */
    while (n % 2 == 0) {
        printf("Die Zahl %d ist durch Zwei teilbar.\n", n);
        n /= 2;  // ganzzahliges Teilen; die 2er-Faktoren werden „abgeknabbert“
    }
    printf("Die Zahl %d ist nicht mehr durch zwei teilbar\n", n);
}
