#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[10]="Hello HRU";
     printf("String-1:%s\n",a);
    
   char a1[4]={'D','O','G','\0'};
   printf("String-2:%s\n",a1);
   
   char a3[]="What is your name";
   printf("string-3:%s\n",a3);
   
   printf("Enter String-4(one-word):");
   scanf("%s",a); 
   printf("String-4:%s\n",a);
   getchar();
     
   printf("Enter string-5(multiple words): ");
   scanf("%[^\n]s",a);
   getchar();
 
   printf ("Enter String -6(multiple words): ");
   gets(a);
   puts(a);
  
   printf ("Enter String -7(Multiple words): ");
   fgets(a,10,stdin);
   printf("String-7:%s\n",a);

   char *b="I am fine";
   printf("String-8:%s\n",b);
   
   char*b1=malloc(5);
   printf("Enter String-9: ");
   scanf("%5s",b1);
   printf("String-9: %s\n",b1);
   free (b1);
    return 0;
} 
