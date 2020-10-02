#include<stdio.h>
int fact(int);
int main()
{
int n;
printf("Enter the value - ");
scanf("%d",&n);
fact(n);
return 0;
}
int fact(int n)
{
static int f=1;
if(n!=1){
f=f*n;
fact(n-1);
}
else 
printf("the factoraial =%d",f);
}
