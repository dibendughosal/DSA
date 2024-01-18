// Write a program in c to insert element in the beginning , at the end and in a given position by taking as user inputs in an array.

#include<stdio.h>
int main(){
    int n,x,p,i,a;
    printf("Enter the num of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Insert at 1. Beginning 2. End 3. Choose Position \n");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
        printf("Enter the number to insert at begin");
        scanf("%d",&a);
        i=n;
        while (i>0){
            arr[i]=arr[i-1];
            i--;
        }
        
            arr[i]=a;
            printf("new array");
            for ( i = 0; i <= n; i++)
            printf("%d",arr[i]);
            break;
    
    case 2:
        printf("Enter number to insert at the end : ");
        scanf("%d",&a);
        arr[n] = a;
        printf("new array :\n ");
        for ( i = 0; i < n; i++)
        {
            printf("%d",arr[i]);
            break;
        }
    case 3:
        printf("choose position :\n ");
        scanf("%d",&p);
        printf("Enter the number to insert the %d index - ",p);
        scanf("%d",&a);
        i = n-1;

        while (i>=p)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[p] = a;
        printf("New array");
        for ( i = 0; i < n; i++)
        {
            printf("%d",arr[i]);
            break;
        }
            
    default:
        printf("invalid");
        break;
    }
    
}