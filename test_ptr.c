
#include <stdio.h>

int a=2,b=3,c=6;
void func (int **p) {*p = &b;}
void main()
{
	int *ptrA = &a;
	int *ptrB = &b;
	int **ptrC;
	int **ptrD;
	printf("If we set **ptr, we may see as two pointer\n");
	printf("For example: \n");
	printf("Once ptr is set (int **ptr),\n");
	printf("this is just without initialization data\n");
	printf("ptr address will be %p\n",&ptrC);
	printf("*ptr will get another address %p\n",*ptrC);
	//printf("**ptr will be %d\n",**ptrC);
        printf("after we give the value. ex. c=6; *ptrC = &c \n");
	*ptrC = &c;
	**ptrD = 8;
	printf("**ptrD should be *ptrD %p \n",*ptrD);
	printf("*ptr should be variable c's address if c address is %p then **ptr should be the value c=6 %d\n",&c, **ptrC);
	printf("ptrA(context) addr: %p\n",ptrA);
	printf("a addr: %p\n",&a);
	printf("b addr: %p\n",&b);
	func(&ptrA);
	printf("ptrB addr: %p\n",&ptrB);
	printf("ptrA addr: %p\n",&ptrA);
	*&ptrB = &a;
	printf("ptrB(context): %p\n",ptrB);
	printf("the result *ptra: %d\n",*ptrA);
}
