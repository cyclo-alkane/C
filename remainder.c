#include<stdio.h>
#include<math.h>
int main()
{
  int x,y;
  float r;
   printf("Enter two no.:");
   scanf("%d%d",&x,&y);
   r=fmod(x,y);
   printf("Remainder=%f\n",r);
   return 0;
}
