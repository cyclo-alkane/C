//qualifiers
#include<stdio.h>
#define PI 3.14            // Symbolic constant or macro
volatile int c =200;       // Global defined volatile element
int main()
{
   // group of symb constants
      enum week {MON=1, TUE, WED, THU, FRI, SAT,SUN};

      int a=10;
      const int b = 100;      //local defined const element(constant)
      
      a=MON;
      printf("Variable a =%d\n",a);
     //b = 2000;
      //c=3000;
     int *ptr;                       // defn a pointer variable
     ptr =(int*)&b;                        // assigning variable's address of similar type
     printf("%d\n",*ptr);              // *-memory dereferencing operator
     *ptr = 2005;
     printf("%d\n",b);
     return 0;
}
