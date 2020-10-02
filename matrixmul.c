#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],x[10][10],y[10][10],m[10][10];
  int i,j,k,r,c,p,q,sum=0;
  printf("Row and column of first matrix");
  scanf("%d%d",&r,&c);
  printf("Enter first matrix");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
    printf("Row and column of second matrix");
    scanf("%d%d",&p,&q);
    if(c!=p)
    printf("multipliction doesnt exist");
    else
    {
       for(i=0;i<p;i++)
       {
          for(j=0;j<q;j++)
          {
           scanf("%d",&b[i][j]);
          }
       }
       
       for(i=0;i<r;i++)
         {
         for(j=0;j<q;j++) 
          {
          for(k=0;k<p;k++)
           {
             sum=sum+x[i][k]*y[k][j];
           }
          m[i][j]=sum;
          sum=0;
          }
         }
          
          printf("Product matrix");
          for(i=0;i<r;i++)
            {
              for(j=0;j<q;j++)
               {
                 printf("%d ",m[i][j]);
               }
               printf("\n");
            }
            }
            return 0;      
}
       
       
