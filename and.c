#include<stdio.h>

int main()
{
   int a,b,x,y;
   printf("Enter two no.");
   scanf("%d%d",&a,&b);
   x=a&b;
   y=a|b;
   printf("%d,%d",x,y);
return 0;
}
  
