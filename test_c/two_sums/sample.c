#include <stdio.h>
#include <stdlib.h>

#define BUCKET_SIZE 10000 
#define BUCKETS_NUM (1000000000 / BUCKET_SIZE)

#if 1

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{

    *returnSize = 2;
#if 1
    int i,j,flag=0;
    int *ret = malloc(2* sizeof(int));
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
#else
    #define MAPSIZE   100000
    int bitmap[2*MAPSIZE]={[0...2*MAPSIZE-1]=NULL};
    for (int i=0;i<numSize;i++)
#endif
    return ret;
}

#else 


int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    *returnSize = 2;
    
    int *ret = malloc(2 * sizeof(int));
    
    int* pointersToLookupTables[2*BUCKETS_NUM] = {[0 ... 2*BUCKETS_NUM-1] = NULL};
    
    for (int i = 0;i<numsSize;i++) { //[2,7,11,15]:[0, 1, 2, 3]
        int k = -1;
        int offset_i = 1000000000 + nums[i];
        int lookup_index = (int) (offset_i / (BUCKET_SIZE));
        int subindex = offset_i % (BUCKET_SIZE);
        
        
        if(pointersToLookupTables[lookup_index]) {
            k = pointersToLookupTables[lookup_index][subindex];
        }

        if(k > -1) {
            ret[0] = k;
            ret[1] = i;
            break;
        } else {     
            int offseted_complement = 1000000000 + target - nums[i];
            int lookup_index = (int) (offseted_complement / (BUCKET_SIZE));
            int subindex = (int) (offseted_complement % (BUCKET_SIZE));
            if (!pointersToLookupTables[lookup_index]) {
                pointersToLookupTables[lookup_index] = malloc(BUCKET_SIZE * sizeof(int));
                memset(pointersToLookupTables[lookup_index], -1, BUCKET_SIZE*sizeof(int));
            }
            pointersToLookupTables[lookup_index][subindex] = i;
        }
    }
    
    return ret;

}
#endif

void main()
{
    int a[]={3,2,4};
    int sumdata=6;
    int ret_size, *b;
    int c;
    c = 1000000000;
    printf("c is test: %d", c);
    int d;
    d= 5;
    printf("sum c+d is test: %d", c+d);
    b=twoSum(a,sizeof(a),sumdata,&ret_size);
    printf("b[0] is : %d, b[1] is : %d  \n",b[0],b[1]);
}

now!  i = 0,  j= 0 
nowJ  i = 0,  j= 1 
now!  i = 0,  j= 1 
nowJ  i = 0,  j= 2 
now!  i = 0,  j= 2 
nowI  i = 0,  j= 3 