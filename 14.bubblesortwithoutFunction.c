//Implement Bubble sort without function.
#include<stdio.h>

int main(){
    int len,i,j,temp;
    printf("Enter the array length : ");
    scanf("%d",&len);
    int arr[len];
    printf("enter the number : ");
    for ( i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your Array Number: ",arr[i]);
    for ( i = 0; i < len; i++)
    {
        printf("%d",arr[i]);
    }
    for ( i = 0; i < len; i++)
    {
        for ( j = 0; j < len-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    printf("\n Your Array by ascending order - ");
    for ( i = 0; i < len; i++)
    {
        printf("%d",arr[j]);
    }
    return i;
    
    
    
}