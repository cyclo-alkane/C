#include<stdio.h>
int main()
{
  int n,i,j,k,flag=0;;
  printf("Enter Number above which you want to get no. ");
  scanf("%d",&n);
  for(i=n+1;;i++)
  {
   flag=0;
   k=i; 
   while(i!=0)
   {j=i%10;
   i=i/10;
   if (j==3)
    flag++;
   if(flag==3)
     {//printf("%d\n",k);
    break;}
} 
i = k;
if(flag==3)
break;
}
    printf("%d\n",k);
return 0;
}
