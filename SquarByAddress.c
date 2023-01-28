#include <stdio.h>


void _swap(int *a , int *b);

int main(){
    int x = 5;
    int y = 10;
    _swap( &x, &y);
    printf("x = %d\n",x);
    printf("y = %d\n",y);





    return 0;
}

 
 void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("a = %d and b = %d\n",t,*a);


 }