// Write a program in c to create a structure named student roll no. (int) , Marks (float), and gender (char) by dot Operator

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
    scanf("%d",&x.roll_no);
    printf("enter the marks :\n ");
    scanf("%f",&x.marks);
    printf("Your Gender :\n ");
    scanf("%s",&x.gender);

    printf("Your Roll No. - %d\n",x.roll_no);
    printf("Your Marks - %f \n",x.marks);
    printf("Your Gender - %c \n",x.gender);
    
}
