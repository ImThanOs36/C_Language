#include <stdio.h>
#include <string.h>

       
int main (){

char str1[]= "String1";
char str2[]= "String2";

for (int i = 0; str1[i] != '\0';i++ ){
printf("%c",str1[i]);
}     

printf("\n");

for (int i = 0; str2[i] != '\0';i++ ){
printf("%c",str2[i]);
}   
printf("\n");    

 printf("%d\n",strlen(str1));      
 printf("%s\n",strcat(str1 ,str2));      
       
       
       
       
       
       
       
       
       
return 0; 
}      
