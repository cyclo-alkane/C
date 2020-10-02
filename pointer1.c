#include<stdio.h>
int main()
{
	int i,*j,**k;
	j=&i;
	*j=10;

	printf("%u\n",j);
	return 0;
}
