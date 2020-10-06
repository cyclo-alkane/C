#include<stdio.h>
void triangles();
int main()
{
    int a,b,c;
    printf("Enter three sides");
    scanf("%d%d%d",&a,&b,&c);
    if(a<0||b<0||c<0||a+b<c||b+c<a||c+a<b)
     printf("It doesn't exist");
    else
    {
     triangles();
    }
    void triangles()
{
     printf("It exist");
}
return 0;
}














