#include <stdio.h>

int main()
{

    int num, r, sum = 0;
    printf("Enter Number to check:");

    scanf("%d", &num);
    int tem = num;

    while (num > 0)
    {

        r = num % 10;
        sum = sum + r * r * r;
        num = num / 10;
    }

    if (sum = tem)
    {

        printf("Number is Armstrong number\n");
    }
    else
    {
        printf("Num is Not Armstrong \n");
    }

    return 0;
}