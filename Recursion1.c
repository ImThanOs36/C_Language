#include <stdio.h>

int display(int num)
{
    if (num <=1)
    {
        return 1;
    }
    else
    {
        display(num * (-1));
        // printf("%d",num);
    }
}
int main()
{
    int num = 5;
    
    printf("%d",display(num));
    return 0;
}