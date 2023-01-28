#include <stdio.h>

int main()
{
    int marks[4];
    marks[0] = 10;
    marks[1] = 20;
    marks[2] = 30;
    marks[3] = 40;

    for (int i = 0; i < 4; i++)
    {
        printf("The marks of student %d is :  %d\n ", i, marks[i]);
    }
    return 0;  
}