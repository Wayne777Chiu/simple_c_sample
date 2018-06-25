
#include <stdio.h>

int a=2,b=3,c=6,d=7;
void func (int **p) {*p = &b;}
void main()
{
	int *ptrA = &a;
	int *ptrB = &b;
	int **ptrC;
	int **ptrD;
	printf("If we set **ptr, we consider as two level pointer\n");
        printf("           ----------- \n");
        printf("          |    C      |    address: \n");
        printf("           ----------- \n");
        printf("\n");
        printf("               |^|\n");
        printf("           ----------- \n");
        printf("          |    ptr1   |    address: \n");
        printf("           ----------- \n");
        printf("\n");
        printf("               |^|\n");
        printf("           ----------- \n");
        printf("          |    ptr2   |    address: \n");
        printf("           ----------- \n");
        printf("in **ptr, ptr pinter to another pointer(*ptr) and *ptr pointer to a address\n");
	printf("For example: \n");
        printf("We define variable c (address(&c): %p, value(c) = %d\n",&c,c);
        int *ptr1;
        printf("and also define a pointer (int *ptr1 )(address(&ptr1): %p\n",&ptr1);
        int **ptr2;
        printf("                a pointer (int **ptr2)(address(&ptr2): %p \n", &ptr2);

        ptr1 = &c;
        printf("then ptr1 `= &c\n");

        ptr2 = &ptr1;      
        printf("     ptr2 = &ptr1\n");
        
        printf("**ptr2 got the same result with *ptr1 is %d : %d \n",**ptr2, *ptr1);

        printf("&*ptr2 got the ptr1 address %p : %p\n",&*ptr2,&ptr1);

        printf("we use operator '&' to find this operation result(*&ptr1): %p \n", *&ptr1);

        printf("by the way, use this *&ptr2 got the same result with (&*ptr2) (%p)\n",*&ptr2 );

        printf("how about *ptrc1? (%p)\n",*ptr2);
        
        printf("Once ptr is set (int **ptr),\n");
	printf("this is just without initialization data\n");
	printf("ptr address will be %p\n",&ptrC);
	printf("*ptr will get another address(*ptr) %p(context)\n",*ptrC);
	printf(" in ptr context will be another address %p\n",&*ptrC);
        printf("after we give the value. ex. c=6; *ptrC = &c \n");
	*ptrC = &c;
	//**ptrD = 8;
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
