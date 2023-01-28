#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Hii.txt", "w");
    fputc('B', fptr);
    fputc('a', fptr);                  //Print TEXT at hii.txt 
    fputc('X', fptr);
    fputc('T', fptr);
    fclose(fptr);
    return 0;
}