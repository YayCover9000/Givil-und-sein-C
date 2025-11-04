#include <stdio.h>
#include <string.h>
#include "struct_student.h"
struct Student {
    int   matrnr;
    char  name[50];
    float grade;
};
void run_struct_student(void) {
    struct Student s1 = {12345, "Lisa Miller", 1.7f};
    struct Student s2;
    s2.matrnr = 67890;
    snprintf(s2.name, sizeof s2.name, "%s", "Max Mustermann");
    s2.grade = 2.3f;
    printf("Student 1: %d, %s, Note %.1f\n", s1.matrnr, s1.name, s1.grade);
    printf("Student 2: %d, %s, Note %.1f\n", s2.matrnr, s2.name, s2.grade);
}
