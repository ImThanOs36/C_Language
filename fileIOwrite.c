#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("Hey.txt", "w");

    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'A');          //Print HAPPY in Hey.txt
    fprintf(fptr, "%c", 'P');
    fprintf(fptr, "%c", 'P');
    fprintf(fptr, "%c", 'Y');

    fclose(fptr);
    return 0;
}