#include<stdio.h>
int main()
{
   int i,j,k,n;
   printf("Enter no.");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
{
   for(j=i;j<=n;j++)
  {
    printf("*");
}
      for(j=1;j<=n-i;j++)
      {
       printf(" ");
      }      
      for(k=1;k<=i;k++)
     {
      printf(" ");
     }
     for(k=i;k<=n;k++)
    {
     printf("*");
    }
    printf("\n");
}
   
return 0;
}
