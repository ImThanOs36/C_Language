#include <stdio.h>
struct vector{
int x;
int y;
};
void calcvector(struct vector v1, struct vector v2, struct vector sum);
int main (){
struct vector v1={5, 10};
struct vector v2={3, 7};
struct vector sum = {0};
calcvector(v1, v2, sum);


    return 0;
}
void calcvector(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x vector is : %d\n",sum.x);
    printf("Sum of y vector is : %d\n",sum.y);
    
}