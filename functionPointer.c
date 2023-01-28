#include <stdio.h>
#include <stdlib.h>

int sum (int a, int b){
return a + b;

}
int main (){

printf("the sum of the a and b is : %d\n",sum(3,4));
int (*fptr) (int, int );
fptr = &sum;
int d = (*fptr) (4,5);
printf(" the value of d is: %d",d);



    return 0;

}
