#include<stdio.h>
int queue[SIZE];
int front=-1;
int rear=-1;
int i;
void enqeue()
{
   if(rear!=SIZE-1)
    {
       rear=rear+1;
       printf("Enter an element: ");
       scanf("%d",&queue[rear]);
    }
    else
     printf("overflow of queue\n");
    if(front==-1)
     front=front+1;
}
void deqeue()
{
   if(front!=-1)
   {
      printf("%d to be deleted\n",queue[front]);
      front=front+1;
   }
   else 
    printf("underflow\n");
   if(front==rear)
    {
     front=-1;rear=-1;
    }
}
void display()
{
  if(front==-1)
   printf("underflow");
  else
    {
       for(i=front;i<=rear;i++)
       {
         printf("%d\n",queue[i]);
       }
    }
}
int main()
{
   for(i=0;i<=SIZE-1;i++)
   {enqeue();}
   display();
   for(i=0;i<SIZE;i++)
   deqeue();
   return 0;
}
