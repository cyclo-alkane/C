#include<stdio.h>
typedef struct student      //typedef is keyword for making a userdefined datatype
{
    int no;
    char name[20];
}stud;

int main()
{
    stud stud1;
    stud *ptr;
    ptr=&stud1;

    printf("Enter no. &name of student");   
    scanf("%d%[^\n]s",&stud1.no,stud1.name);
    printf("stud1 details: ",ptr->no,ptr->name);
   
    return 0;
}
