#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	clock_t start,end;
	double time;
	int n,i,m,temp;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n];
	start=clock();
	printf("Enter elements:\n");
	for(i=0;i<n;i++)	
	{
		arr[i]=rand()%1000000;
		//scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Enter element to be searched:");
	scanf("%d",&m);
	temp=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]==m)
		{
			printf("Number is present at %d position\n",i+1);
			break;
		}
	}
	end=clock();
	time=(end-start);
	printf("Time:%lf\n",time);
	return 0;
}
