#include <stdio.h>
int main()
{
    char ch;
    printf("enter your letter :");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper Case");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower Case");
    }
    else
    {
        printf("This letter is not English");
    }

    return 0;
}