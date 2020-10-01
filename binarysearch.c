#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	clock_t start,end;
	double t;
	start=clock();
	int n,i,j,m,f,l,k,a,temp;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements:\n");
	//printf("Enter number to be searched: ");
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%100000;
	}
	//printf("Enter number to be searched: ");
	for(i=0;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0&&temp<arr[j];j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Enter number to be searched: ");
	scanf("%d",&m);
    	f = 0;
    	l = n-1;
    	k = (f+l)/2;
 
	while (f<= l) {
      	if (arr[k] < m)
        	 f = k + 1;    
      	else if (arr[k] == m) 
      	{
        	 printf("%d found at location %d.\n", m, k+1);
        	 break;
     	 }
     	 else
         l = k - 1;
 
      k = (f + l)/2;
    }
    if (f > l)
      printf("Not found! %d isn't present in the list.\n", m);
	end=clock();
	t=end-start;
	printf("Time taken: %lf\n",t);
	return 0;
}
