#include<stdio.h>
int main()
{
    static int array[10][10];
    int i,j,m,n;
    int counter=0;
    
    printf("Enter order of matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter coefficient of matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&array[i][j]);
        {
        if(array[i][j]==0)
            counter++;
        }
        }
     }
         if (counter > ((m * n) / 2))

    {

        printf("The given matrix is sparse matrix \n");

    }

    else

        printf("The given matrix is not a sparse matrix \n");

    printf("There are %d number of zeros\n", counter);

}
