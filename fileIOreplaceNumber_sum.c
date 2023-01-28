#include <stdio.h>

int main()
{
    int num, r, sum = 0;
    FILE *fptr;
    fptr = fopen("NumberForReplace.txt", "r");
    fscanf(fptr, "%d", &num);

    while (num > 0)

    {
        r = num % 10;
        sum = r + sum;
        num = num / 10;
    }
    // printf("%d", sum);
    fclose(fptr);
    fptr = fopen("NumberForReplace.txt", "w");
    fprintf(fptr,"%d",sum);






    fclose(fptr);
    return 0;
}