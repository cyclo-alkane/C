#include<stdio.h>
int main()
{
  int i,j,power=1,k,l;
   scanf("%d%d",&i,&j);
   if (i>j)
{
     for(k=1;k<=j;k++)
      {
        power=power*i;
       } 
        printf("answer=%d\n",power);
}
    else
{
     for(l=1;l<=i;l++)
      {
        power=power*i;
      }
        printf("answer=%d\n",power);
}      
return 0;
}

