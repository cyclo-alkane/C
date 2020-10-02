#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,power;
   printf("enter two no.");
   scanf("%d%d",&a,&b); 
   power=pow(a,b);
   printf("Ans=%d\n",power);
   return 0;
}
