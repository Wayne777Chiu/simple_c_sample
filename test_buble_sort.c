

#include <stdio.h>

int bubble_sort(int * input,int len);

void main()
{
	//int in_data[10]= { 9,2,3,1,5,4,8,7,10,6};
	int in_data[10]= { 23,12,76,35,34,85,23,54,98,2};

	bubble_sort(in_data,10);
}

int bubble_sort(int * input, int len)
{
	int output[10];
        int tmp=-1, i, j;

	for (i=0;i<len;i++)
	{
		for (j=len-1;j>=0;j--)
		{
			if (j>=i) {
				if (j!=0) {
					if (input[j] < input[j-1]) {
						output[j] = input[j-1];
						output[j-1] = input[j];
						input[j] = output[j];
						input[j-1] = output[j-1];
					}
				}
        		}
		}
	}
	for (i =0 ;i<len; i++){
		printf("output[%d] = %d \n",i,output[i]);
	}
}

