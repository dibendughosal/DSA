//Write a C program to add 5 element and Sum all the Numbers in an Array.

#include<stdio.h>

int main(){
    int array[5],i;
    
    for( i = 0;i<5;i++){
        printf("Enter the %d Numbers: ",i+1);
        scanf("%d",&array[i]);
    }
    int sum= 0;
    for ( i = 0; i < 5; i++)
    {
        sum=sum + array[i];
    }
    printf("result = %d",sum);

}