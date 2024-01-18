#include<stdio.h>

int main(){
    int x= 5;
    int *p;
    p = &x;
    printf("the value of x : %d",x);
    printf("\nthe address of x : %d",p);
    printf("\nthe value of x : %d",*p);
    printf("\nthe address of x : %d",&x);
    printf("\nthe address of x : %d",&p);
    
    return 0;
    
}