// Write a program in c to insert element in the beginning , at the end and in a given position by taking as user inputs of a linkedlist.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
ins_beg(){
    int a;
    struct node *p;
    printf("enter the element to insert at the beginning");
    scanf("%d",&a);
    p = (struct node*)malloc(sizeof(struct node));
    p->data = a;
    if (start == NULL)
    {
        p->next=NULL;
    }
    else{
        p->next=start;
    }
    start=p;
    
}
ins_end()
{
    int a;
    struct node *p,*temp;
    printf("enter the element to insert at the end");
    scanf("%d",&a);
    p = (struct node*)malloc(sizeof(struct node));
    p->data = a;
    if (start == NULL)
    {
        p->next=NULL;
        start=NULL;
    }
    else{
        temp=start;
        while (temp!=NULL)
        {
            if (temp->next==NULL)
            {
                temp->next=p;
                p->next=NULL;
            }
            temp=temp->next;
            
        }
        
    }

}
ins_pos()
{
    int i,j,a;
    struct node *p,*loc;
    printf("Enter the index to insert position : ");
    scanf("%d",&j);
    printf("Enter the element to insert at the %d position : ");
    scanf("%d",&a);
    p=(struct node*)malloc(sizeof(struct node));
    p->data=a;
    if (start==NULL)
    {
        printf("Need more element to reach %d index. \n",j);
    }
    else{
        loc=start;
        for ( i = 0; i < i-1; i++)
        {
            loc=loc->next;
        }
        p->next=loc->next;
        loc->next=p;
        
    }
    

}
insert(){
    int c;
    printf("Insert at - \n1. Beginning \n 2. End \n 3. Given Position \n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        ins_beg();
        break;

    case 2:
        ins_end();
        break;

    case 3:
        ins_pos();
        break;
    }
}
show(){
    if (start==NULL)
    {
        printf("Empty\n");
    }
    else
    {
        struct node *temp;
        temp=start;
        while (temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
    
    
}
main()
{
    int sh;
    char s;
    do
    {
        printf("1. insert \n 2. Delete \n");
        scanf("%d",&sh);
        switch (sh)
        {
        case 1:
            insert();
            show();
            break;
        case 2:
            delete();
            show();
            break;
        
        default:
            printf("Invalid");
        }
    printf("for continue: 'y' and for End 'n' ");
    scanf("%c",&s);    
        
    } 
        
    while (s=='y');
    
    return 0;
}

