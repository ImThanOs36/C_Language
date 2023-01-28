#include <stdio.h>

int main (){
    int num1;
    int num2;
   FILE *fptr;
   fptr = fopen("twoNumberReplaceBySum.txt","r");
   fscanf(fptr,"%d",&num1);
   fscanf(fptr,"%d",&num2);
   int sum = num1 + num2;

   fclose(fptr);
   fptr = fopen("twoNumberReplaceBySum.txt","w");
   fprintf(fptr,"%d",sum);
   fclose(fptr);



    return 0;
}