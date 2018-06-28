
#include <test_union.h>
#include <stdio.h>

void main()
{
	REG REG_VAL;
	REG_VAL.Val= 0x1234;
	printf("data[0] %X data[1] %X  \n",REG_VAL.two.Data[0],REG_VAL.two.Data[1]);
        printf("the MS_BYTE is %X the LS_BYTE is %X \n",REG_VAL.byte.um.MS_Byte, REG_VAL.byte.lm.LS_Byte);
	printf("bit 15 %d \n",REG_VAL.byte.um.field.bit15);
        printf("bit 14 %d \n",REG_VAL.byte.um.field.bit14);
        printf("bit 13 %d \n",REG_VAL.byte.um.field.bit13);
        printf("bit 12 %d \n",REG_VAL.byte.um.field.bit12);
        printf("bit 11 %d \n",REG_VAL.byte.um.field.bit11);
        printf("bit 10 %d \n",REG_VAL.byte.um.field.bit10);
        printf("bit 9 %d \n",REG_VAL.byte.um.field.bit9);
        printf("bit 8 %d \n",REG_VAL.byte.um.field.bit8);
        printf("bit 7 %d \n",REG_VAL.byte.lm.field.bit7);
        printf("bit 6 %d \n",REG_VAL.byte.lm.field.bit6);
        printf("bit 5 %d \n",REG_VAL.byte.lm.field.bit5);
        printf("bit 4 %d \n",REG_VAL.byte.lm.field.bit4);
        printf("bit 3 %d \n",REG_VAL.byte.lm.field.bit3);
        printf("bit 2 %d \n",REG_VAL.byte.lm.field.bit2);
        printf("bit 1 %d \n",REG_VAL.byte.lm.field.bit1);
        printf("bit 0 %d \n",REG_VAL.byte.lm.field.bit0);

}
