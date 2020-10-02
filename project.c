#include<stdio.h>
#include"arithmetic.h"
extern int add();
extern int mul(int ,int );
int main()
{
  printf("Start Project\n");
  int n1,n2;
  printf("enter two no.\n");
  scanf("%d%d",&n1,&n2);
   
   printf("Inside main(). Module-1 returned Sum=%d\n",add());
   printf("Inside main(). Module-2 returned Product=%d\n",mul(n1,n2));
   printf("Inside main(). Header referenced Difference=%d\n",sub(n1,n2));
   printf("Inside main(). Header referenced Quotient=%f\n",div(n1,n2));
    
   printf("\nEnd Project\n");
   return 0;
}
