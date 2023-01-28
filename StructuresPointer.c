#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int rollNumber;
    float cgpa;
};

int main()
{

    struct student s1 = {"shubham", 36, 9.5};
    struct student *ptr;
    ptr = &s1; // storing value at address s1;
    printf("--------------------------------\n");

    printf("With pointer\n");
    printf("Name of student is : %s\n", (*ptr).name);
    printf("Roll number  of student is : %d\n", (*ptr).rollNumber);
    printf("Name of student is : %f\n", (*ptr).cgpa);
    printf("--------------------------------\n");

    printf("Without pointer\n");

    printf("Name of student is : %s\n", s1.name);
    printf("Roll Number of student is : %d\n", s1.rollNumber);
    printf("Cgpa of student is : %f\n", s1.cgpa);
    printf("--------------------------------\n");

    printf("Structures With pointer arrow operator\n");
    printf("Name of student is : %s\n", ptr->name);
    printf("Roll number  of student is : %d\n", ptr->rollNumber);
    printf("Name of student is : %f\n", ptr->cgpa);
    printf("--------------------------------\n");
    return 0;
}