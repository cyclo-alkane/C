#include<stdio.h>
int main()
{
   int i,j,k,n,a=1;
   printf("Enter a no.");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
	 for(j=1;j<=n;j++)
	   printf(" ");
	 for(j=1;j<=i;j++)
	   printf("%d",j);
	 for(k=j-1;k>=i;k--)
	   printf("%d",k);
	  printf("\n");
	}
	return 0;
	}
