// Write a program to add elements of an array

#include<stdio.h>
int main()
{
    int i,arr[5];
    for ( i = 0; i < 5; i++)
    {
        printf("Enter Number:");
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(i = 0;i<5;i++){
        sum= sum + arr[i];
    }
    printf("result = %d",sum);
    
    return 0;
}
