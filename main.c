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
#include "examplesForUnderstanding/casting.h"
#include "examplesForUnderstanding/operatoren.h"
#include "examplesForUnderstanding/vergleichsOperatoren.h"
#include "examplesForUnderstanding/logischeOperatoren.h"
int main(void) {
    helloFromC1();
    natuerlicheZahlen();
    datentypen();
    konstanten();
    notsigned();
    overflow();
    hexaOverflow();
    gueltigkeitsbereich();
    casting();
    operatoren();
    vergleichsOperatoren();
    logischeOperatoren();
    return 0;
}