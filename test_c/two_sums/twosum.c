#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUCKET_SIZE 10000 
#define BUCKETS_NUM (1000000000 / BUCKET_SIZE)

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *ret = malloc(2* sizeof(int));
#if 1
    int i,j,flag=0;
    for (i=0;i<numsSize;i++) 
    {
        for(j=0;j<numsSize;j++)
        {
            if (i!=j) {
                if ((nums[i]+nums[j]) == target) {
                    *ret = i;
                    *(ret+1)= j;
                    printf(" we got i: %d, j: %d \n",i,j);
                    flag=1;
                    break;
                }
                // printf("nowJ  i = %d,  j= %d \n",i,j); 
            }
            // printf("now!  i = %d,  j= %d \n",i,j);            
        }
        // printf("nowI  i = %d,  j= %d \n",i,j);      
        if (flag==1) break;
    }


void main()
{
    int a[]={1,2,4,7};
    int sumdata=6;
    int ret_size, *b;
    int c;
    c = 1000000000;
    printf("c is test: %d \n", c);
    int d;
    d= 5;
    printf("sum c+d is test: %d \n", c+d);
    b=twoSum(a,sizeof(a)/sizeof(int),sumdata,&ret_size);
    printf("b[0] is : %d, b[1] is : %d  \n",b[0],b[1]);
}

