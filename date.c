#include<stdio.h>
struct date
{
   int day;
   char month[10];
   int year;
}today;

  int main()
 {
    struct date yesterday;
    printf("Enter day");
    scanf("%d",&today.day);
    printf("Enter month ");
    scanf("%s",&today.month);
   // getchar();
   
    printf("Enter year");
    scanf("%d",&today.year);
    printf("Today's date: %d-%s-%d\n",today.day,today.month,today.year);
     yesterday.day=today.day-1;
    printf("yesterday's date: %d-%s-%d\n",yesterday.day,today.month,today.year);
    return 0;
}
