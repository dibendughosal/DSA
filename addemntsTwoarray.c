//Write a C program to add 5 element and Sum the Numbers Array 1 + Array2
#include<stdio.h>
int main(){
    int arr1[5],arr2[5],arr3[5],i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter the %d Number of array I :",i+1);
        scanf("%d",&arr1[i]);
        printf("Enter the %d Number of array II:",i+1);
        scanf("%d",&arr2[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        arr3[i]=arr2[i] + arr1[i];
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",arr3[i]);
    }
    
    
}