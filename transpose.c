#include<stdio.h>
void transpose(int a[][n],int b[][n])
{
    int i,j;
    for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
         b[i][j]=a[j][i];
     }
}
int main()
{
    int a[n][n];
    int b[n][n],i,j;
    
    printf("Enter matrix");
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
      {
       scanf("%d%d",&a[i][j]);
      }
     }
    transpose(a,b);
    printf("Result matrix");
    for(i=0;i<n;i++)
    {
     for(j-0;j<n;j++)
       printf("%d ",b[i][j]);
    printf("\n");
    }
return 0;
} 
