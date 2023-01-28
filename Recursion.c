#include <stdio.h>

int facto(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
     return (num * facto(num - 1));

    }
}
void main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("Factoreal is :%d\n ", facto(num));

}
