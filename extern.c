#include<stdio.h>
int x=10;
int main()
{
	extern int y;
	printf("The value of x is %d\n",x);
	printf("The value of y id %d",y);
	return 0;
}
x=10;
int y=50;

