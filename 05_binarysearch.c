// Write a program to do binary Search Operation in an array.
#include<stdio.h>
int arr[5];
int Search(int low,int high,int key){
    if (high==low)
    {
        return low;
    }
    else{
        int mid = ( low + high )/2;
        if(key<=arr[mid]){
            Search(low,mid,key);
        }
        else if (key>arr[mid])
        {
            Search(mid+1,high,key);
        }
        

    }
    
}
int main(){
    int i,j,k,min,x;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter the Number: ");
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        min=arr[i];
        for ( j = i+1; j < 5; j++)
        {
            if (arr[j]<arr[i])
            {
                min=arr[j];
                arr[j]=arr[i];
                arr[i]=min;
            }
            
        }
        
    }
    printf("Year Array is: ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n Enter the number to search: ");
    scanf("%d",&k);
    x=Search(0,5,k);
    if(arr[x]==k){
        printf("number find in %d position of an array",x+1);
    }
    else{
        printf("Not Found!");
    }
    
    
    
}