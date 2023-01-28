#include <stdio.h>
int main()
{

    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);

    if (marks >= 1 && marks <= 30)
    {
        printf("You Got C grade\n");
    }
    else if (marks > 30 && marks <= 70)
    {
        printf("You Got B grade\n");
    }
    else if (marks > 70 && marks <= 90)
    {
        printf("You Got A grade");
    }
    else if (marks > 90 && marks <= 100)
    {
        printf("You Got A+ grade\n");
    }
    else
    {
        printf("Invalid Marks\n");
    }

    return 0;
}