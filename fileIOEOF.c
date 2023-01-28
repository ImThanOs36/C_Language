#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("ABC.txt", "rz");

    char ch;
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fptr);
    }

    fclose(fptr);
    return 0;
}