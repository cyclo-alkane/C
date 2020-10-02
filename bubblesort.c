#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	clock_t start,end;
	double time;
	start=clock();
	int n,i,j;
	FILE *fw;
	printf("Enter number of numbers to be entered: ");
	scanf("%d",&n);
	int m,arr[n],temp;
	fw=fopen("bubble.txt","w");
	if(fw!=NULL)
	{
		for(i=0;i<n;i++)
		{
			m=rand()%100000;
			putw(m,fw);
		}
	}
	else
	printf("error creating file\n");
	fclose(fw);
	fw=fopen("bubble.txt","r");
	for(i=0;i<n;i++)
	{
		arr[i]=getw(fw);
	}
	fclose(fw);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Sorted Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	end=clock();
	time=end-start;
	//time=(end-start)/CLOCKS_PER_SEC;
	printf("Total execution Time:%lf\n",time);
	return 0;
}
