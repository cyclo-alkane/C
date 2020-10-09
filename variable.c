#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *a,n,i;
 scanf("%d",&n);
 a=malloc(n*sizeof(int));
 if(a!=NULL)
  {
     printf("Base address of array: %p\n",a);
     
     printf("Enter %d elements of array: ",n);
     for(i=0;i<n;i++)
      scanf("%d",&a[i]);
 
     printf("Elements of array: ");
     for(i=0;i<n;i++)
         printf("%d ",a[i]);
      
     printf("\n");
     free(a);
   }
     else
      printf("Heap memory not allocated");
   return 0;
}
