#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,s;
    printf("enter two no.");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
      s=pow (a,b);
      printf("Ans= %d \n",s);
    }
    else
     {
       s=pow (b,a);
       printf("Ans= %d \n",s);
     }
     return 0;
}
