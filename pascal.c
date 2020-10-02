#include<stdio.h>
int main()
{
   int i,j,k,n,a=1;
   printf("Enter a no.");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=0;j<=n-i;j++)
      {
          printf(" ");
      }
      for(k=0;k<=i-1;k++)
      {
      	if(i==1 || k==0)
        {
        	a=1;
        }
        else
        {
        	a=a*(i-k)/k;
        }
        printf("%d ",a);	
     }
      printf("\n");
}
return 0;
}
