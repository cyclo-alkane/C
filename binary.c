#include<stdio.h>
int main()
{
   int i,n,l=0,k=1;
   printf("Enter a no.");
   scanf("%d",&n);
   while(n!=0)
   {
    i=n%2;
    n=n/2;
    l=l+(k*i);
    k=k*10;
   }
  printf("%d\n",l);
   
return 0;
}
