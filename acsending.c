#include<stdio.h>
int main()
{

  int i,j,n,l;
  printf("Enter no. to be entered");
  scanf("%d",&n);
  int a[n];
  int k[n];
  for(i=0;i<n;i++)
  {
    printf("Enter no.");
    scanf("%d",&a[i]);
    
   }
  for(i=0;i<n;i++)
  {  
    for(j=i+1;j<n+1;j++)
    {
       if(a[i]<a[j])
         k[i]=a[i];
        else
        {l=a[i];
        a[i]=a[j];
        a[j]=l;
        k[i]=a[j];} 
         //printf("%d",k[i]);
     }
    printf("%d ",k[i]);
}
printf("\n");
return 0;
}
