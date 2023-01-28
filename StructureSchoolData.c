#include <stdio.h>
#include <string.h>
typedef struct SchoolStudentInfo
{
    char name[100];
    int rollNumber;
    float cgpa;
    char city[100];

} ssi;

int main()
{
    int i = 0;
    struct SchoolStudentInfo student[5];
    for (int i = 0; i <= 5; i++)
    {
        printf(" Enter student %d your address : ",i);
        scanf("%s", &student[i].name);
        scanf("%s", &student[i].rollNumber);
        scanf("%s", &student[i].cgpa);
        scanf("%s", &student[i].city);
        printf("name : %s , rollnumber :%d , cgpa : %f ,city :%s\n", student[i].name, student[i].rollNumber, student[i].cgpa, student[i].city);
    }

    return 0;
}