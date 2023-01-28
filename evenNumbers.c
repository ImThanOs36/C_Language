#include <stdio.h>

int main()
{

    int num;
    printf("Enter Number:");
    scanf("%d",&num);

    if(num%2==0)
    {

        printf("Entered number is even!\n");
    } else {

        printf("Entered Number is Odd\n");
    }

    return 0;
}