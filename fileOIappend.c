#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("Hey.txt", "a");

    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'A');          //Print HAPPYHAPPY in Hey.txt becasue HAPPY is already in Hey.txt
    fprintf(fptr, "%c", 'P');
    fprintf(fptr, "%c", 'P');
    fprintf(fptr, "%c", 'Y');

    fclose(fptr);
    return 0;
}