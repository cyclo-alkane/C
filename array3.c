#include<stdio.h>
int main()
{
   int i,a[SIZE];
   printf("Enter %d elements of array: ",SIZE);
   for(i=0;i<SIZE;i++)
    {
      scanf("%d",&a[i]);
      printf("%d ",a[i]);
    }
   printf("\n");
return 0;
}

