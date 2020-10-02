#include<stdio.h>
int main()
{
  char sentence[5];
  printf("Enter sentence: ");
  // prevents overflow by accepting 5 characters,\n truncated input
  scanf("%5[^\n]s",sentence);
  printf("Accepted Sentence:%s\n",sentence);
  
  char paragraph[100];
  printf("Enter paragraph: ");
  scanf("%[^\t]s",paragraph);
  printf("Accepted Paragraph:%s\n",paragraph);

  return 0;
}
