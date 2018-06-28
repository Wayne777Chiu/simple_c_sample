#include <stdio.h>

int AddTest2(int *a, int *b)
{
	return *a+*b;
}


void main()
{
	int a =5, b= 12;
        int result = AddTest2(&a,&b);
        printf("the relsut: %d \n",result);
}
