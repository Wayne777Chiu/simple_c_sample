


#include <stdio.h>


void main()
{
    int *ptr1, *ptr2;
    int a=1, b=2, c=3;
    ptr1 = &a;
    ptr2 = &ptr1;
    printf("It should complier error, duo to below reason: \n");
    printf("iwarning: assignment from incompatible pointer type [-Wincompatible-pointer-types]\n");
    printf("     ptr2 = &ptr1; \n");

}
