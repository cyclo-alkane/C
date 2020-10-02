#include<stdio.h>
int main()
{
  int n,i,flag=1,k;
  scanf("%d",&n);
  for(i=0;i<=n;i++)
{
  i=n%10;
  n=n/10;
  if(n!=0)
  flag++;
 }
  k=flag;
printf("%d\n",k);
return 0;
}

