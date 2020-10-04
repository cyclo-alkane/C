#include<stdio.h>
#include<stdlib.h>
//#define SIZE 5
typedef struct subject
{
	char name[20];
	int code;
}sub;

int main()
{
    int i;
	sub *a;
	a=(sub*)calloc(SIZE,sizeof(sub));
	
	for(i=0;i<SIZE;i++)
	{
	   printf("Enter Subject name and code: "); 
	   scanf("%s",(a+i)->name);
	   scanf("%d",&(a+i)->code);
	}
		for(i=0;i<SIZE;i++)
	{
	   printf("%s ",(a+i)->name);
	   printf("%d\n",(a+i)->code);
	}
	return 0;
}
	
	
