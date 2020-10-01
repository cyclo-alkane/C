#include<stdio.h>
//#include<math.h>
int power(int,int);
int main()
{
  int n,i,j=0,flag=1,k,l,temp;
  printf("Enter no.");
  scanf("%d",&n);
  temp=n;
   l=n;
    for(i=0;i<=n;i++)
{
  i=n%10;
  n=n/10;
  if(n!=0)
  flag++;
 }
   k=flag;
   while(temp!=0)
{
   i=temp%10;
   temp=temp/10;
   j=j+power(i,k);
}
   printf("no.=%d\n",j);
   if(j==l)
   printf("Its an armstrong no.\n");
   else
   printf("its not an armstrong no.\n");
return 0;
}


 int power(int i,int j)
{
  int power=1,k,l;
   if (i>j)
{
     for(k=1;k<=j;k++)
      {
        power=power*i;
      }
}
    else
{
     for(l=1;l<=i;l++)
      {
        power=power*i;
     
}   
}   
return (power);
}

   






 
  
