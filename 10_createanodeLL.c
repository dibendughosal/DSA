// create a node for Linkedlist.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main(){
    struct node *head = (struct node*) malloc (sizeof(struct node));
    printf("Enter the Element : ");
    scanf("%d",&head->data);
    head->next=NULL;
    printf("Your Element is %d",head->data);
    return 0;

}
