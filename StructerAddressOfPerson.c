#include <stdio.h>
#include <string.h>

typedef struct Address
{

    char name[100];
    int houseNumber;
    int block;
    char city[100];


} Add;                                                        
void printAddress(struct Address add);

int main()
{
    struct Address adds[5];
    
    printf("Entere here 1 :");
    scanf("%s", &adds[0].name);
    scanf("%d", &adds[0].houseNumber);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);

    printf("Entere here 2:");
    scanf("%d", &adds[1].houseNumber);
    scanf("%s", &adds[1].name);
    scanf("%d", &adds[1].block);
    scanf("%s", &adds[1].city);

    printf("Entere here 3:");
    scanf("%s", &adds[2].name);
    scanf("%d", &adds[2].houseNumber);
    scanf("%d", &adds[2].block);
    scanf("%s", &adds[2].city);

    printf("Entere here 4:");
    scanf("%s", &adds[3].name);
    scanf("%d", &adds[3].houseNumber);
    scanf("%d", &adds[3].block);
    scanf("%s", &adds[3].city);

    printf("Entere here 5:");
    scanf("%s", &adds[4].name);
    scanf("%d", &adds[4].houseNumber);
    scanf("%d", &adds[4].block);
    scanf("%s", &adds[4].city);

    printAddress(adds[0]);
    printAddress(adds[1]);
    printAddress(adds[2]);
    printAddress(adds[3]);
    printAddress(adds[4]);
    return 0;
}

void printAddress(struct Address add)
{

    printf("Person name is :%s\n", add.name);
    printf("Person's houseNumeber is :%d\n", add.houseNumber);
    printf("Person's block is :%d\n", add.block);
    printf("Person's city is :%s\n", add.city);
}