cmake_minimum_required(VERSION 4.0)
project(givil_und_sein_C C)

# Setze den C-Standard
set(CMAKE_C_STANDARD 99)

# main.c plus alle C-Dateien im Unterordner examplesForUnderstanding automatisch einbinden
file(GLOB SOURCES
        "examplesForUnderstanding/*.c"
)

# Executable erzeugen
add_executable(main main.c ${SOURCES}
        examplesForUnderstanding/overflow.c
        examplesForUnderstanding/hexaOverflow.c
        examplesForUnderstanding/hexaOverflow.h
        examplesForUnderstanding/Gueltigkeitsbereich.c
        examplesForUnderstanding/Gueltigkeitsbereich.h
        examplesForUnderstanding/casting.c
        examplesForUnderstanding/casting.h
        examplesForUnderstanding/operatoren.c
        examplesForUnderstanding/operatoren.h
        examplesForUnderstanding/vergleichsOperatoren.c
        examplesForUnderstanding/vergleichsOperatoren.h
        examplesForUnderstanding/logischeOperatoren.c
        examplesForUnderstanding/logischeOperatoren.h

)