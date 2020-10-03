#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	clock_t start,end;
	double time;
	start=clock();
	int n;
	FILE *fw;
	printf("Enter number of numbers to be entered: ");
	scanf("%d",&n);
	int i,j,arr[n],temp=0,min,m;
	fw=fopen("selection.txt","w");
	if(fw!=NULL)
	{
		for (i = 0; i < n; i++)
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
	fw=fopen("selection.txt","r");
	for(i=0;i<n;i++)
	{
		arr[i]=getw(fw);
	}
	fclose(fw);

	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if (arr[j] < arr[min]) 
			{ 
            	min=j;
            }
            if(min!=i)
            {
            	temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;
            }
        }  			
	}
	 printf("sorted array:\n");
	 for (i = 0; i < n; i++)
         printf("%d\n", arr[i]);
     end=clock();
     time=end-start;
     printf("Time taken= %lf\n",time);
	 return 0;
}
