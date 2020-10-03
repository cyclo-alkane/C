#include<stdio.h>
int func(char *);
int main()
{
 char c[20];
 int k;
 fgets(c,20,stdin);
 k=func(c);
 printf("%d\n",k-1);
 return 0;
}
int func(char *x)
{
    static int l=0;
    if (*x == '\0')
    return(l);
    else
    { 
    l++;
    func(++x);
    }
}
    
    
    
