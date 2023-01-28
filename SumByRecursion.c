#include <stdio.h>

int sum(int n);

int main() 
{   int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    printf("%d", sum(n));
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sum1mn = sum(n - 1);
    int sum = sum1mn + n;
    return sum;
}