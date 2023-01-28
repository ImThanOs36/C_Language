#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[100];
    int roll;
    float cgpa;

};



int main()
{
struct student s1;
s1.roll=8;
s1.cgpa=7.5;
strcpy(s1.name, " shubham");  //  strcpy(s1.name, "Shubham"); Needed in this type of declearing
printf("Name of student is :%s \n",s1.name);
printf("Roll number of student is : %d\n",s1.roll);
printf("CGPA of student is : %f\n",s1.cgpa);


    return 0;
}