#include <stdio.h>
void PrintString(char arr[]);
int main()
{
    char firstName[] = "SHUBHAM";
    char lastName[] = "LAD";
    PrintString(firstName);
    PrintString(lastName);

    return 0;
}
void PrintString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}


