//Implement Bubblesort within a function.
#include<stdio.h>
void bubble_sort(int arr[],int n){
    int i,j;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        
            }
            
        }
        
    }
    
}
int main(){
    int i,n;
    printf("Enter the size : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array Number : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    printf("The Sorted array by ascending order : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
    
    
}
