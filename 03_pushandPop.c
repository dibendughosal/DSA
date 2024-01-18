// Write a program in c to implement push and pop operation of stack using array.

#include<stdio.h>
int stack[5],top = -1;
void show(){
    for (int i = 0; i <= top; i++)
    {
        printf("%d",stack[i]);
        printf("\n");
    }
    
}
void push()
{
    int x;
    if (top == 5-1){
        printf("Stack Overflow");
    }
    else {
        printf("Enter Number to add/Insert : ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
        printf("Inserted Successfully");
    }
}
void pop()
{
    int x;
if (top == -1){
    printf("Stack is empty, so it will be Underflow");
}
else{
    printf("Last data deleted");
    top--;
    stack[top]=x;
}
}


int main()
{
    int x,a;

    do
    {
        printf("1. for Insert - Press 1 \n 2. for Delete - Press 2\n 3. for Display - press 3 \n ");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        default:
            printf("Invalid \n");
        }
        printf("\nfor continue - Press 0 \n for End - Press 1");
        scanf("%d",&x);

    } while (x == 0);
    
    return 0;
}
