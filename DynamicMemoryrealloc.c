#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    ptr = (int *)calloc(5, sizeof(int)); // we creat Memory using colloc ; size = 5 * int(4byte) = 20;
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr, 3);
    ptr[0] = 7;
    ptr[1] = 8;
    ptr[2] = 9;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}