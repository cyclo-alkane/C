#include<stdio.h>
int main()
{
   int i,n,k=0;
   scanf("%d",&n);
    while(n!=0)
    {
     i=n%10;
      n=n/10;
      k=k*10+i;
    }
     printf("%d\n",k);
    return 0;
}
  

