#include<stdio.h>
int main()
{
  int i;
  char ch;
  FILE *fptr;
  fptr=fopen("leters.txt","w");
  if (fptr!= NULL)
    printf("File created successfully\n");
  else
  return -1;
 
  for(ch='A';ch<='Z';ch++)
  {
     putc(ch,fptr);
  }
  
  fclose(fptr);

  fptr=fopen("letters.txt","r");
  printf("\nCurr pos: %ld\n",ftell(fptr));
  fseek(fptr,0,0);
  printf("1st char:%c\n",ch);
  
  printf("\n Curr pos:%ld\n",ftell(fptr));
  fseek(fptr,4,0);
  ch=getc(fptr);
  printf("5th char:%c\n",ch);
  
  printf("\n Curr pos:%ld\n",ftell(fptr));
 
  printf("rewind\n");
  rewind(fptr);

  printf("\nCurr pos:%ld\n",ftell(fptr));

  fseek(fptr,9,0);
  ch=getc(fptr);
  printf("10th char:%c\n",ch);

  printf("\nCurr pos:%ld\n",ftell(fptr));
  
  fseek(fptr,4,1);
  ch=getc(fptr);
  printf("15th char:%c\n",ch);

  printf("\nCurr pos:%ld\n",ftell(fptr));

  fclose(fptr);

  return 0;
}



    
