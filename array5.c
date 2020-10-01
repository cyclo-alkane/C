#include<stdio.h>
int modify(int *);
int main()
{
   int a[10],i;
   printf("Enter no.");
   for(i=0;i<10;i++)
   {
    scanf("%d",a[i]);
   }
   modify(&a[10]);
   return 0;
}

int modify(int *b[10])
{
   int j,k[10];
   for(j=0;j<=9;j++)
   {
     k[i]=b[i]*3;
   }
  return 0;
}

