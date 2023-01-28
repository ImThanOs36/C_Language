#include <stdio.h>

int main()
{
    
    int arr[] ={2,4,6,8,10};
 
    printf("The value at position 3 is : %d\n",arr[3]);  
    //output :  The value at position 3 is : 8

    printf("The value at position 0 is : %d\n",arr); // arr is a pointer is pointing the 0'th index of arr (array)
    //output: The Address of position 3 in the array is : 6422280


    printf("The value at position 3 is : %d\n",arr + 3);  
    //output: The Address of position 3 in the array is : 6422296

    printf("The Address of position 3 in the array is : %d\n",&arr[3]); 
    //output: The Address of position 3 in the array is : 6422296




    printf("The value at position 3 is : %d\n",*(&arr[0]));  
    //output :  The value at position 3 is : 8

    printf("The value at position 0 is : %d\n",*(arr));// arr is a pointer is pointing the 0'th index of arr (array)
    //output: The Address of position 3 in the array is : 6422296

    printf("The Address of position 3 in the array is : %d\n",*(&arr[3])); 
    //output: The Address of position 3 in the array is : 6422296

    printf("The value at position 3 is : %d\n",*(arr + 3));  
    //output: The Address of position 3 in the array is : 6422296
    return 0;
}