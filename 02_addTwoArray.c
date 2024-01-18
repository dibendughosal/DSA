//Write a program to add two array.

#include<stdio.h>
int main()
{
    int arr[5],arr2[5],arr3[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter te number of array 1: ");
        scanf("%d",&arr[i]);
         printf("Enter te number of array 2: ");
        scanf("%d",&arr2[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        arr3[i] = arr[i] + arr2[i];
    }
    for ( i = 0; i < 5; i++)
    {
        printf(" %d",arr3[i]);
    }
    
    

    return 0;
    
}

