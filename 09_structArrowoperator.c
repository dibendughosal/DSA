// Write a program in c to create a structure named student roll no. (int) , Marks (float), and gender (char) by Arrow Operator

#include<stdio.h>

struct student
{
    int roll_no;
    float marks;
    char gender;
};
void main(){
    struct student x,*p;
    p=&x;

    
    printf("enter the roll No. : \n");
    scanf("%d",&p->roll_no);
    printf("enter the marks :\n ");
    scanf("%f",&p->marks);
    printf("Your Gender :\n ");
    scanf("%s",&p->gender);

    printf("Your Roll No. - %d\n",p->roll_no);
    printf("Your Marks - %f \n",p->marks);
    printf("Your Gender - %c \n",p->gender);
    
}
