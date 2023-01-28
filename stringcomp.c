#include <stdio.h>
#include <string.h>

int main()
{

    char string1[200];
    char string2[200];

    printf("Enter First String :");
    scanf("%s", string1);
    printf("Enter Second String :");
    scanf("%s", string2);
    int i = strcmp(string1, string2);
    printf("%d", i);
    return 0;
}
