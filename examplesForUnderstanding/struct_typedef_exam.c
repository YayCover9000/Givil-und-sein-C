#include <stdio.h>
#include <string.h>
#include "struct_typedef_exam.h"
typedef struct {
    char course[32];
    int  day, month, year;
    float grade;
} Exam;
static Exam createExam(const char *course, int d, int m, int y, float g) {
    Exam e;
    snprintf(e.course, sizeof e.course, "%s", course);
    e.day = d; e.month = m; e.year = y; e.grade = g;
    return e;
}
static void printExam(Exam e) {
    printf("%s am %02d.%02d.%04d, Note %.1f\n", e.course, e.day, e.month, e.year, e.grade);
}
void run_struct_typedef_exam(void) {
    Exam e = createExam("Programmieren II", 7, 3, 2025, 1.3f);
    printExam(e);
}
