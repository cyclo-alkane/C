#include<stdio.h>
int main()
{
 struct book
{
 char name;
 float price;
 int pages;
};
struct book b[5];
int i;
printf("Enter name,price and pages of book  ");
for(i=0;i<5;i++)
{
 //printf("Enter name,price and pages of book");
 
 scanf("%s,%f,%d",b[i].name,&b[i].price,&b[i].pages);
}
for(i=0;i<5;i++)
{
  printf("%s,%f,%d",b[i].name,&b[i].price,b[i].pages);
}
return 0;
} 
