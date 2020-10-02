#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
char name[10];
FILE *ptr1, *ptr2, *ptr3; 
ptr1=fopen("program.txt","w");
printf("Enter No. to File: ");
scanf("%d",&n);
fprintf(ptr1,"%d", n); 
fclose(ptr1); 
ptr2=fopen("program.txt","a");
if (ptr2==NULL) 
{
printf("File Does not Exist\n");
exit(1);
}
printf("Enter Name to Append File: ");
scanf("%s", name);
fprintf(ptr2,"%s",name); 
fclose(ptr2); 
ptr3=fopen("program.txt","r");
if (ptr3==NULL) 
{
printf("File Does not Exist\n");
exit(1);
}
fscanf(ptr3,"%d %s", &n, name);           
printf("Value in File....\nNo.= %d, Name = %s\n",n, name); 
fclose(ptr3);
return 0;
}
