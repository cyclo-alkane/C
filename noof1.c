#include<stdio.h>
int main()
{
   int i,n,l=0,k=1,j,m,f=0,s;
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
   while(l!=0)
  {
   j=l/10;
   m=j*10;
   s=l-m;
   l=l/10;
   //printf("hi");
   if(s==1)
    f++;
   }
  printf("%d\n",f);
return 0;
}
