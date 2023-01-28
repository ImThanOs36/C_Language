#include <stdio.h>
#include <string.h>
typedef struct student
{

    char name[100];
    int rollNumber;
    float cgpa;

} stdinfo;

void printInfo(struct student s1);
int main()
{
    stdinfo student1 = {"Shubham", 8, 7.6};
    printInfo( student1);
    // printf("Name of student is  %s", student1.name);
    // printf("Roll Number of student is  %d", student1.rollNumber);
    // printf("CGPA of student is  %f", student1.cgpa);

    return 0;
}
void printInfo(struct student s1)
{
    printf("Name of student is : %s\n",s1.name);
    printf("Roll Number of student is : %d\n",s1.rollNumber);
    printf("CGPA of student is : %f\n",s1.cgpa);
    
}
