#include<stdio.h>
int main()
{
   int i,j,k,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n-i;j++)
      {
       printf(" ");
      }      
      for(k=1;k<=i;k++)
     {
      printf("* ");
     }
    printf("\n");
}
   
for(i=2;i<=n;i++)
    {
      for(j=1;j<=i-1;j++)
     {
       printf(" ");
     }
     for(k=i;k<=n;k++)
     {
       printf("* ");
     }
printf("\n");
}

return 0;
}
