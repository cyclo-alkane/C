#include<stdio.h>
int sum(int *,int )
int main()
{
  int n;
  printf("Enter n");
  int a[n];
  for(i=0;i<n;i++);
  {
    scanf("%d",a[i]);
  }
  sum(&a,n);
  return 0;
}

int sum(int *b,int n);
{
   static int s=0;
   if(n!=0)
    {
      s=s+b;
      s(&b,n--);
    }
    else
      printf("sum=%d",s);
}
   

     
