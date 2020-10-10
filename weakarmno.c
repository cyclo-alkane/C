#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,j=0,f=1,k=1,l,temp,m,p=0,o;
  printf("Enter no.");
  scanf("%d",&n);
  temp=n;
   o=n;
while(n!=0)
{
  i=n%10;
  n=n/10;
  j=j*10+i;
  }
    printf("%d\n",j);
while(j!=0)
  {
    l=j%10;
    j=j/10;    
    p=p+pow(l,k);
    k++;
   }
   printf("%d\n",p);
  if(p==o)
   printf("Its a weakarm no.\n");
   else
   printf("its not a weakarmno.\n");
return 0;
}
