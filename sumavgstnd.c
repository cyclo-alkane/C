//to receive 5 no. and return sum,avg,standard deviation.
#include<stdio.h>
#include<math.h>
int sumavgstnd(int n1,int n2,int n3,int n4,int n5,int *sum,float *avg,float *stnd);
int main()
{
   int n1,n2,n3,n4,n5,sum;
   float avg,stnd;
   printf("Enter 5 no.");
   scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    sumavgstnd(n1,n2,n3,n4,n5,&sum,&avg,&stnd);
   printf("Sum=%d\n",sum);
   printf("Average=%f\n",avg);
   printf("Standard deviation=%f\n",stnd);
return 0;
}
int sumavgstnd(int n1,int n2,int n3,int n4,int n5,int *sum,float *avg,float *stnd)
{
   *sum=n1+n2+n3+n4+n5;
   *avg=(n1+n2+n3+n4+n5)/5;
   *stnd=sqrt((*sum-*avg)/5);
}
   
   

