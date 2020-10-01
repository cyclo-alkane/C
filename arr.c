#include<stdio.h>

int arr(int *,int );
int main()
{
   int n;
   scanf("%d",&n);
   int a[n],i;
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   
   arr(a,n);
   return 0;
}


int arr(int *a,int n)
{
   int i;
   for(i=0;i<n;i++)
   {
     printf("%d\n",a[i]);
   }
}
