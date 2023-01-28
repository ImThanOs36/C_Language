#include <stdio.h>
void reverseArray (int arr[], int n);
void printarray (int arr[], int n);
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};

   reverseArray(arr, 6);
   printarray(arr, 6);
   
    return 0;
}
void printarray (int arr[], int n){
for (int i =0; i <n; i++){
    printf("%d\t",arr[i]);
    // printf("\n");
}

}
void reverseArray (int arr[], int n){
 for (int i =0; i <n/2; i++){
     int firstele = arr[i];
     int secondele = arr[n-i-1];
     arr[i] = secondele;
     arr[n-i-1] = firstele;

    }
}