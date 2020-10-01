#include<stdio.h>
#define PI 3.14
int areaperi(int,float *,float *);
int main()
{
	int radius;
	float area,peri;
        printf("Enter radius");
	scanf("%d",&radius);
	areaperi(radius,&area,&peri);
	printf("Area=%f\n",area);
	printf("Perimeter=%f\n",peri);
	return 0;
}
int areaperi(int r,float *a,float *p)
{
	*a=PI*r*r;
	*p=2*PI*r;
}
