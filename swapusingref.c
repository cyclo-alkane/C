//swap using call by reference
#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b,s;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a,b=%d,%d",a,b);
   return 0;
}
  
 void swap(int *x,int *y)
   {
       int c;
       c=*x;
       *x=*y;
       *y=c;
    printf("a,b=%d,%d\n",*x,*y);
    }

