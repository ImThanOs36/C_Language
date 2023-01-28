#include <stdio.h>
#include <string.h>
void concatenate(char string1[], char string2[]);
void length(char string1[]);
void camp(char string1[],char string2[]);
char main()
{

    char string1[200];
    char string2[200];
    int choice;

    printf("1:Compare / 2:concatenate / 3:String length \n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        camp(string1, string2);
    } else{

    printf("Wrong Choice\n");
    

    }

    return 0;
}

// void camp(char string1[], char string2[])
// {

//     printf("Enter First String :");
//     scanf("%s",&string1);
//     printf("Enter Second String :");
//     scanf("%s",&string2);
//     int d = strcmp(string1, string2);
//     if(d == 0){
            
//     printf("h");
// } else {
//     printf("1");
// }
