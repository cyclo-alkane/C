#include<stdio.h>
#include<stdlib.h>


int main(int argc,char *argv[])            // command line argument
{
 /*  if(argc!=5)
  {
    printf("argument passed through command line not equal to 5");   
    return 1;
  }*/
printf("\nProgramm Name:%s \n",argv[0]);
printf("arg 2:%s\n",argv[1]);
printf("arg 3:%s\n",argv[2]);
printf("arg 4:%s\n",argv[3]);
printf("arg 5:%s\n",argv[4]);
printf("arg 6:%s\n",argv[5]);
 
return 0;
}
