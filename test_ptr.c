
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
        printf("          |    C      |    context: c value, *ptr1, **ptr2\n");
        printf("           -----------     address: &c, *&ptr1, &*ptr1, *ptr2\n");
        printf("\n");
        printf("               |^|\n");
        printf("           ----------- \n");
        printf("          |    ptr1   |    context: &c, *&ptr1, &*ptr1, *ptr2\n");
        printf("           -----------     address: &ptr1, &*ptr2, *&ptr2\n"); 
        printf("\n");
        printf("               |^|\n");
        printf("           ----------- \n");
        printf("          |    ptr2   |    context: &ptr1, &*ptr2, *&ptr2\n");
        printf("           -----------     address: &ptr2\n");
        printf("\n");
        printf("in **ptr, ptr pinter to another pointer(*ptr) and *ptr pointer to a address\n");
	printf("For example: \n");
        printf("We define variable c (address(&c): %p, value(c) = %d\n",&c,c);
        int *ptr1;
        printf("and also define a pointer (int * ptr1)(address(&ptr1): %p\n",&ptr1);
        int **ptr2;
        printf("                a pointer (int **ptr2)(address(&ptr2): %p \n", &ptr2);

        ptr1 = &c;
        printf("then ptr1 = &c\n");

        ptr2 = &ptr1;      
        printf("     ptr2 = &ptr1\n");
        
        printf("c's value read by c: %d ,*ptr1: %d , **ptr2: %d\n", c, *ptr1, **ptr2);

        printf("c's address read by &c: %p, *&ptr1: %p, &*ptr1: %p, *ptr2: %p\n",&c, *&ptr1,&*ptr1,*ptr2);

        printf("ptr1 address read by &ptr1: %p, &*ptr2: %p, *&ptr2: %p\n", &ptr1,&*ptr2,*&ptr2);
}
