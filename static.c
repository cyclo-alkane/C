#include<stdio.h>
void increment();
int main()
{
   increment();
   increment();
   increment();
   increment();
   increment();
return 0;
}
void increment()
{
   static int i=0;
   printf("%d",i);
   i++;
}
