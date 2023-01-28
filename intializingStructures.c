#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int rollNumber;
    float cpga;
};

int main()
{

    struct student s1 = {"shubham", 36, 9.5};
    //  strcpy(s1.name, "Shubham");    Not needed in this type of declearing
    printf("Name of student is : %s", s1.name);

    return 0;
}
