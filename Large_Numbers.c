#include <stdio.h>

int main()
{

    int a = 10;
    int b = 80;
    int c = 90;
    int large;
    if (a > b && a > c)
    {

        large = a;
    }
    else if (b > a && b > c)
    {

        large = b;
    }
    else if (c > a && c > b)
    {

        large = c;
    }
    else
    {

        printf("Numbers are equal");
    }

    printf("%d", large);

    return 0;
}