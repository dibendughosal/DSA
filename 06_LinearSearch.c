//Write a program to do Linear search operation in an array.

#include<stdio.h>
int main(){
    int array[10],search,c,n;
    printf("Enter the no. of elements in array: ");
    scanf("%d",&n);
    printf("\nEnter %d integer\n",n);
    for ( c = 0; c < n; c++)
    {
        scanf("%d",&array[c]);
    }
    printf("Enter a number to search");
    scanf("%d",&search);

    for (c = 0; c < n; c++)
    {
        if (array[c]==search)
        {
            printf("%d is pesent at location %d",search,c);
            break;
        }
        
    }
    if (c == n)
        printf("%d is not present in the array",search);
    return 0;
    
    

}