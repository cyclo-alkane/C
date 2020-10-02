#include<stdio.h>
void fibonacci(int );
int main()
{
  int n;
 printf("Enter no.");
 scanf("%d",&n);
 fibonacci( n );
 return 0;
}

void fibonacci(int n)
 {
    static int a=0,b=1,c;
    if(n>=1)
    {
      c=a+b;
      printf("%d ",c);
      a=b;
      b=c;
      fibonacci(n-1);
     }
     
 } 
      
    
