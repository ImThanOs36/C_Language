#include <stdio.h>

int main()
{

    printf("<----- Post Increment -----> \n");

    int i = 1;
    printf("%d \n", i++); // This is Post Increment
    printf("%d \n", i);

    printf("<----- pre  Increment -----> \n");

    int j = 1;
    printf("%d \n", ++j); // This is Pre Increment
    printf("%d \n", j);

    printf("<----- Post Decrement -----> \n");

    int a = 1;
    printf("%d \n", a--); // This is Post Increment
    printf("%d \n", a);

    printf("<----- Post Decrement -----> \n");

    int b = 1;
    printf("%d \n", --b); // This is Pre Increment
    printf("%d \n", b);

    return 0;
}