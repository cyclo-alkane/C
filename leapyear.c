// to find whether given year is a leap year or not
#include<stdio.h>
int main()
{
    int y,a,b,c;
    printf("Enter a Year");
    scanf("%d",&y);
    a=y%4;
    b=y%100;
    c=y%400;
    if(a==0||b==0&&c==0)
     printf("its a leap year\n");
    else
     printf("its not a leap year\n");
   
    return 0;
}
