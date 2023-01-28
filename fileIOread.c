#include <stdio.h>

int main()
{

FILE *fptr;
int ch;
fptr = fopen("Hello.txt","r");
fscanf(fptr , "%d",&ch);
printf("%d ",ch);
fscanf(fptr , "%d",&ch);
printf("%d ",ch);            
fscanf(fptr , "%d",&ch);
printf("%d ",ch);
fscanf(fptr , "%d",&ch);
printf("%d ",ch);
fscanf(fptr , "%d",&ch);
printf("%d ",ch);



fclose(fptr);
    return 0;
}