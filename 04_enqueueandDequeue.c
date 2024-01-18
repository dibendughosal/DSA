#include<stdio.h>
#include<stdlib.h>
#define n5
int queue[n];
int rear;
int front;
int enqueue(int data);
int dequeue();
void print();

int main()
{
    int ch,data;
    while (1)
    {
        printf("1. Enqueue 2. Dequeue 3. Show 4. Exit");
        print("enter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter the number to enqueue : ");
            scanf("%d",&data);
            if(enqueue(data)){
                printf("Enqueue Successfully");
            }
            else{
                printf("Queue is full");
            }
            break;
        case 2:
            data=dequeue();
            if (data)
            {
                printf("Deleted");
            }
            else
                printf("Queue is Empty.");
            break;
        case 3:
            print();
            break;
        case 4:
            exit(0);
        
        default:

            printf("invalid");
        }
        printf("\n");
    }
    
}
int enqueue(int data)
{

    if (rear==n){
        return 0;
    }
    queue[rear] = data;
    rear++;
    return 1;
}
int dequeue(int data){
    if(front==rear){
        return 0;
    }
    else{
        int data = queue[front];
        front++;
        return data;
    }
}
void print(){
    if(front != rear){
        for (int i = front; i < rear; i++)
        {
            printf("%d",queue[i]);
        }
        
    }
}
