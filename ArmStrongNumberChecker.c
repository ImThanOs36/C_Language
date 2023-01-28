#include <stdio.h>

int main()
{
    int n, r, sum = 0, temp;
    printf("Enter a number  to check the number is an Armstrong Number or not :");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (sum == temp)
    {

        printf("This is an Armstrong number ");
    }
    else
    {

        printf("This is not an Armstrong number");
    }
}