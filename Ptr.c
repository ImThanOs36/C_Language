#include <stdio.h>

int main(){
    
   int x;
   int *ptr;

   ptr = &x;
   *ptr = 0;

   printf("Value of x = %d\n",x);
   printf("Value at *ptr = %d\n",*ptr);
    
   *ptr+= 5;

   printf("Value of x = %d\n",x);
   printf("Value at *ptr = %d\n",*ptr);
    
    (*ptr)++;
    printf("Value of x = %d\n",x);
   printf("Value at *ptr = %d\n",*ptr);
   
    
    
      return 0;
    
}