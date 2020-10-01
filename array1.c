#include<stdio.h>
int main()
{
    int sum=0,avg;
    int i;
    int marks[30];
    for(i=0;i<=29;i++)
    {
        printf("Enter Marks");
        scanf("%d",&marks[i]);
    }
     for(i=0;i<=29;i++)
        sum=sum+marks[i];
   
    avg=sum/30;
    printf("Average marks=%d\n",avg);
    return 0;
}
