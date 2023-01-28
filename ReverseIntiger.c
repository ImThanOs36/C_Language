#include <stdio.h>
       
int main (){
   int n = 23470,reverse=0;
   while(n!=0){
    reverse= n%10+reverse*10;
    n=n/10;

   }           
       
   printf("%d",reverse);  
  
return 0; 
}      
