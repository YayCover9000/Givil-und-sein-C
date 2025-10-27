/// Linken mittels diese commands -> ergänzen wenn es mehr wird
/// "cc main.c examplesForUnderstanding/*.c -o main"
////// dqnn mit "./main" runnen

// Must include weil sonst weiß C nicht wo schauen
#include "examplesForUnderstanding/helloFromC1.h"
#include "examplesForUnderstanding/natuerlicheZahlen.h"
#include "examplesForUnderstanding/datentypen.h"
#include "examplesForUnderstanding/gueltigkeitsbereich.h"
#include "examplesForUnderstanding/konstanten.h"
#include "examplesForUnderstanding/notsigned.h"
#include "examplesForUnderstanding/overflow.h"
#include "examplesForUnderstanding/hexaOverflow.h"
#include "examplesForUnderstanding/gueltigkeitsbereich.h"
int main(void) {
    helloFromC1();
    natuerlicheZahlen();
    datentypen();
    konstanten();
    notsigned();
    overflow();
    hexaOverflow();
    gueltigkeiten();
    return 0;
}