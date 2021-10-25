#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct CollegeModule {
    char moduleName[50];
    int credits;
};

struct Student {
    char name[50];
    int age;
    struct CollegeModule collegeModules[10];
};

void printModule (struct CollegeModule module )
{
    printf ("the module name is %s\n", module.moduleName);
}

int main ( void )
{
    struct CollegeModule module = { "Multi-paradigm Programming" };
    printModule (module);

    struct Student student = {};
    student.collegeModules[0] = module;

    struct CollegeModule module2 = { "Introduction to Programming" };
    student.collegeModules[1] = module2;

    printModule ( student.collegeModules[0]);
    printModule ( student.collegeModules[1]);

    return 0;
}

// struct Manager {
//     char name[50];
//     int age;
//     double salary;
//    struct Employee employees[10]
// };

// struct Employee {
//     char name[50];
//     int age;
//     double salary;
//     int yearsWorked;
//     char jobTitle;
// };