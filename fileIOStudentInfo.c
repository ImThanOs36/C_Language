#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[100];
    int rollNumber;
    float cgpa;

    printf("Enter Name :");
    scanf("%s", &name);
    printf("Enter Roll Number :");
    scanf("%d", &rollNumber);
    printf("Enter CGPA :");
    scanf("%f", &cgpa);




    fprintf(fptr,"Name of student is :%s\n",name);
    fprintf(fptr,"Roll Number of student is :%d\n",rollNumber);
    fprintf(fptr,"CGPA of student is :%f\n",cgpa);

    fclose(fptr);
    return 0;
}