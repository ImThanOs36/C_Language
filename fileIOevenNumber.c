#include <stdio.h>

int main()
{   FILE *fptr;
fptr= fopen("evenNumber.txt","w");
    int n;
    printf("Enter Number :");
    scanf("%d", &n);


    for(int i =2; i<=n;){
        printf("%d ",i);
        fprintf(fptr,"%d ",i);
        i = i+2;
    }
   
  fclose(fptr);
    return 0;
}