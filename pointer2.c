#include<stdio.h>
int main()
{
	int *ptr1,a,**ptr4;
	ptr1=&a;
	*ptr1=100;
	ptr4=&ptr1;
	**ptr4=1000;
	printf("address of pointer=%p\n",&ptr1);
	printf("pointers address=%p\n",ptr1);
	printf("address of mem location of integer=%p\n",&a);
	printf("address of ptr4=%p\n",&ptr4);
	printf("address stored in  ptr4=%p\n",ptr4);
	printf("address of mem loc of integer=%p\n",&(**ptr4));
	return 0;
}
