#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{	
	clock_t start,end;
	double time;
	start=clock();
	FILE *fw;
	int n,i,j,temp,k,m;
	printf("Enter number of numbers to be entered: ");
	scanf("%d",&n);
	int arr[n];
	fw=fopen("text.txt","w");
	if(fw!=NULL)
	{
		for(i=0;i<n;i++)
		{
			m=rand()%1000000;
			putw(m,fw);
		}
	}
	else
	{
		printf("Error creating file");
	}
	fclose(fw);
	
	fw=fopen("text.txt","r");
	for(i=0;i<n;i++)
	{
		arr[i]=getw(fw);
	}
	fclose(fw);

	for(i=0;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0&&temp<arr[j];j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	end=clock();
	time=end-start;
	printf("Time taken= %lf\n",time);
	return 0;
}
