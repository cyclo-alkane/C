// fn call with parameter and with return
#include<stdio.h>
int add();
int sub();
int mul(int ,int );
int div(int ,int );
int main()
{
   int a,b,calsum,calsub,calmul,caldiv;
  
   add();
   calsub=sub();
   printf("Enter two no.");
   scanf("%d%d",&a,&b);
   calmul=mul(a,b);
   caldiv=div(a,b);
   //printf("sum=%d\n",calsum);
   printf("sub=%d\n",calsub);
   //printf("mul=%d\n",calmul);
   printf("div=%d\n",caldiv);
   return 0;
}

int add()
{
    int a,b,sum;
    printf("enter two no.");
    scanf("%d%d",&a,&b);
    sum=a+b;
   printf("sum=%d\n",sum);
   return 0;
}

int sub()
   { 
     int a,b,sub;
    printf("enter two no.");
    scanf("%d%d",&a,&b);
      sub=a-b;
    //printf("sub=%d\n",sub);
    return (sub);
  }

int mul(int x,int y)
   {
      int mul;
     mul=x*y;
     printf("mul=%d\n",mul);
     return 0;
}


int div(int x,int y)
   {
    //printf("div=%d\n",div);
    return (x/y);    
   }
