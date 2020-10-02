#include<stdio.h>
int main()
{
  struct address
   {
     	char phone[10];
     	char city[25];
     	int pin;
   };
  struct emp
   {
        char name[25];
        struct address a;
   };
   
   struct emp e={"naman","531046","lucknow","05"};
   
   printf("name=%s phone=%s\n",e.name,e.a.phone);
   printf("city=%s pincode=%d\n",e.a.city,e.a.pin);
   return 0;
}   
   
         
   

