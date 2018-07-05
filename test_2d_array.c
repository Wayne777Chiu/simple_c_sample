

#include <stdio.h>
#include <stdlib.h>

#define ROW  3
#define COLUMN 4

void one_ptr_array();
void one_ptr_of_array();
void ptr_to_ptr();

void main()
{
	printf("Here, we define the 2D array \n");
	printf("      column0  column1  column2  column3\n");
	printf("     ---------------------------------\n");
        printf("row0 |  rc00    rc01     rc02     rc03\n");
        printf("row1 |  rc10    rc11     rc12     rc13\n");
        printf("row2 |  rc20    rc21     rc22     rc23\n");
        printf("\n");
        printf("\n");
        printf("\n");

}	

void one_ptr_array()
{
	int *arr = (int *)malloc(ROW * COLUMN * sizeof(int));
        int i,j,num;
	for (i=0; i<ROW; i++)
	{
		for (j=0; j<COLUMN; j++)
		{
			*(arr+ i* ROW + j) = num++;
			printf(" Column%d%d = %d \n ");
		}
	}

}
