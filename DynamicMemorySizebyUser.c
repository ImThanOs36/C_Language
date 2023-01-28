#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter Quantity Of size you want :");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter (%d) number to store in Memory : ", i);
        scanf("%d", &ptr[i]);
        printf("value in ptr[%d] is : %d\n", i, ptr[i]);
    }

    return 0;
}