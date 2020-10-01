/*marks received by student in 3 sub.and we have to find avg and percentage of
 * these marks*/
#include<stdio.h>
int avgper(int ,int ,int ,float *,float *);
int main()
{
	int a,b,c;
	float avg,per;
	printf("Enter 3 no.");
	scanf("%d%d%d",&a,&b,&c);
	avgper(a,b,c,&avg,&per);
	printf("Average=%f\n",avg);
	printf("Percentage=%f\n",per);
	return 0;
}
int avgper(int n1,int n2,int n3,float *a,float *p)
{
	*a=(n1+n2+n3)/3;
	*p=((n1+n2+n3)*100)/300;
}

