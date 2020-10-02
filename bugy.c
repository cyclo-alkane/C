#include<stdio.h>
//#include<stdlib.h>
int main(int *argc,int **argv)
{

FILE *fp,*fp2,*fp3;
fp=fopen("trial","r");
fseek(fp,"20",SEEK_SET);
fclose(fp);
fp2=fopen("c\tc\file.c","r");
if(!fp2)
printf("Unable to open file");
fclose(fp2);
unsigned char ch;

fp3=fopen("trial","r");
while((ch=getc(fp3))!=EOF)
    printf("%c",ch);
fclose(fp3);
}
