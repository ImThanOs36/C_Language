#include <stdio.h>
void salting (char password [], int n , int m );
int main()
{
 char password [] = "HelloWorld";
 salting(password, 3, 6);
    return 0;
}
void salting (char password [], int n , int m){
char newPassword[200];
int j = 0;
for (int i =n; i<=m; i++,j++){
    newPassword[j] = password[i];
}

newPassword[j]= '\0';
puts(newPassword);
}