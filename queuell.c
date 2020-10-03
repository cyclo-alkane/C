#include<stdio.h>
#include<stdlib.h>
int count=0;        
int i;
struct node        
{
int no;             
struct node *next;  
}*new, *first=NULL, *ptr;
void get_element()  
{
new = (struct node*) malloc(sizeof(struct node));
printf("New Address: %p\n", new);
printf("Enter data to insert: ");
scanf("%d", &new->no); 
new->next=NULL;
}
void create_list()    
{
int n;
printf("Enter the number of elements to be inserted: ");
scanf("%d", &n);
count = count+n;
for(i=1; i<=n; i++)
{
get_element();
if(first==NULL) first=new;

else
{
for(ptr=first; ptr->next!=NULL; ptr=ptr->next);
ptr->next=new;
}
printf("\nElement-%d inserted\n", i);
}
}
void insert_end()
{
get_element();
count = count+1;
if(first==NULL) first=new;
else
{
for(ptr=first; ptr->next!=NULL; ptr=ptr->next);
ptr->next=new;
}
printf("Element inserted in End of List\n");
}

void insert()

{
int choice;
printf("\nWhere to Insert.....Enter 1(Single),2(Multiple): ");
scanf("%d", &choice);
switch(choice)
{
case 1: insert_end(); break;
case 2: create_list(); break;
default: printf("Wrong Choice\n");
}
}
void delete_begin()
{
if(first->next==NULL) first=NULL;
else
{
ptr=first->next;

first=ptr;
}
count = count-1;
printf("Element is Deleted from Start of List\n");
}

void delete()

{
int choice;

if(first!=NULL)
{
delete_begin();
}
else printf("List is Empty\n");
}
void display()
{
if(first==NULL) printf("List is empty\n");

else
{
printf("\n No. of elements in List: %d \n", count);
for(ptr=first; ptr!=NULL; ptr=ptr->next)

printf("Block Address:%p, Data: %d, Next: %p\n", ptr, ptr->no, ptr->next);
}
}
int main()
{
int choice;
L1: printf("\nEnter 1(Insert), 2(Delete), 3(Display), 4(Exit): ");
scanf("%d", &choice);
switch(choice)
{
case 1: insert(); goto L1;
case 2: delete(); goto L1;
case 3: display(); goto L1;
case 4: break;
default: printf("Wrong Choice\n"); goto L1;
}
return 0;
}
