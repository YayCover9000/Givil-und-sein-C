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
#include "examplesForUnderstanding/bitweiseOperatoren.h"
#include "examplesForUnderstanding/array.h"
#include "examplesForUnderstanding/arrayError.h"
#include "examplesForUnderstanding/literale.h"
#include "examplesForUnderstanding/formats.h"
#include "examplesForUnderstanding/escape.h"
#include "examplesForUnderstanding/input.h"
#include "examplesForUnderstanding/input2.h"
#include "examplesForUnderstanding/args.h"
#include "examplesForUnderstanding/forloop.h"
#include "examplesForUnderstanding/chess_rudementary.h"
#include "examplesForUnderstanding/chess_complexer.h"
#include "examplesForUnderstanding/ifStatement.h"
int main(int argc, char *argv[]) {
    /*
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
    bitweiseOperatoren();
    bitweiseOperation2();
    array();
    arrayError();
    literale();
    formats();
    escape();
    input();
    input2();
    */
    //args(argc, argv);  // <-- richtiger Funktionsaufruf!
    //forloop();
    //start_chess_rudementary();
    chess_complexer();
    ifStatement();
    return 0;
}