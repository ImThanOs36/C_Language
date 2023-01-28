#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number :");
    scanf("%d", &n);
    int i = 0;
    while (i <= n)
    {

        printf("%d \n", i);
        i++;
    }

    printf("Reverse\n");
    for (int i = n; i >= 0; i--)
    {

        printf("%d \n", i);
    }

    return 0;
}