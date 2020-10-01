#include<stdio.h>
int main()
{
   int i,j,arr[5],a;
   printf("Enter no.");
   for(i=0;i<=4;i++)
   {
     scanf("%d",&arr[i]);
   }
    a=arr[0];
   for(i=1;i<5;i++)
   {
    	//for(j=i+1;j<=4;j++)
    	if(a>arr[i])
      		a=arr[i];
      	//else
       		//a=arr[i];
   }
  printf("smallest no.=%d\n",a);
return 0;
}
   
