#include<stdio.h>
void fun(char);
int main()
{
    char para[40];
    char i,j;
    printf("Enter para:");
    scanf("%[^\n]s",para);
    printf("%s\n",para);
    for(i=0;i<40;i++)
    {
    j=para[i];
    printf("%d ",j);
    fun(j);
    
        }
return 0;
}

void fun(char a)
 {
    
    static int flag=0;
    switch(a);
  {
   case 'a':
     {
         flag++;
         
     }
}
 /*  case 'b'
       {}
   case 'c'
       {}
   case 'd'
      {}
   case 'e'
     {}
   case 'f'
    {}
   case 'g'
      {}
   case 'h'
      {}
   case 'i'
    {}
   case 'j'
   {}
   case 'k'
   {}
  case 'l'
   {}
   case 'm'
   {}
   case 'n'
   {}
   case 'o'
   {}
  case 'p'
   {}
   case 'q'
    {}
   case 'r'
    {}
    case 's'
    {}
   case 't'
   {}
   case 'u'
   {}
   case 'v'
   {}
   case 'w'
    {}
   case 'x'
   {}
   case 'y'
   {}
   case 'z'
    {}*/

