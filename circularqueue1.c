#include<stdio.h>
#define SIZE 5
int front=-1,rear=-1;
int q[SIZE];
void enqueue()
{
	int x;
	if((front==0&&rear==SIZE-1)||(rear+1==front))
		printf("overflow\n");
	else if(rear==SIZE-1)
	        {
	        rear=0;
	        printf("Enter element");
                scanf("%d",&x);
                }
	else if(rear==-1)
	     {front=0;
	      rear=0;
	      printf("Enter element");
              scanf("%d",&x);}
	else
	{	rear++;
                printf("Enter element");
                scanf("%d",&x);}
	        q[rear]=x;
}

void dequeue()
{
	int a;
	if(front==-1)
		printf("Underflow\n");
    else
    {
        a=q[front];
        if(front==rear)
        	{front=-1;rear=-1;}
        else if(front==SIZE-1)
        	front=0;
        else
        	front++;
        printf("deleted element is%d\n",a);
}
}
void display()
{
	int i,j;
	if(front==-1&&rear==-1)
		printf("Underflow\n");
	else if(front>rear)
	{
		for(i=front;i<SIZE;i++)
			printf("%d",q[i]);
		for(j=0;j<rear;j++)
			printf("%d",q[j]);
			
	}
	else
	{
	    for(i=front;i<rear;i++)
	    	printf("%d",q[i]);
	
	}
    printf("\n");
}
int main()
{
    int choice;
   L1: printf("Enter 1)enqueue 2)display 3)deueue 4)Exit\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: enqueue();  goto L1;
    case 2: display();  goto L1;
    case 3: dequeue();  goto L1;
    case 4:    break;
    default: printf("Wrong Choice\n");  goto L1;
    }
    return 0;
}
	
