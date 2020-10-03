#include<stdio.h>
int main()
{
  int a;
  short int b;
  long int c;
  unsigned int d;
  long long int e;
  printf("size memory of int=%d\n",sizeof(a));
  printf("size memory of short int=%d\n",sizeof(b));
  printf("size memory of long int=%ld\n",sizeof(c));
  printf("size memory of unsigned int=%u\n",sizeof(d));
  printf("size memory of long long int=%lld\n",sizeof(e));
  return 0;
}
