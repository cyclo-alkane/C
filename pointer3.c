//Function pointer
#include<stdio.h>
void fun(int a)
{
  printf("Value of a=%d\n",a);
}
int main()
 {
   void (*ptr)(int);
   ptr=&fun;
   (*ptr)(10);
   return 0;
}
