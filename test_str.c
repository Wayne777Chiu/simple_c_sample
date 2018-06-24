
#include <stdio.h>
#include <string.h>

void main()
{
    char *str="abcd";
    char *conver="1234",p;
    char result[10];
    int i,len;
    len = strlen(str);
    for (i=0; i< len; i++){
	    printf("the word %c\n",str[len-i-1]);
	    printf("conver %c\n",conver[i]);
	    printf("data:%s \n",conver);
	    //p = str[len-i-1];
	    //conver[i] = p;
            //*p = *s;
	    result[i] = str[len-i-1];
	    printf("the p %c \n",p);
	    //conver[i] = 'g';
	    //conver[i]= str[len-i-1];
	    //*conver++ = str[len -i -1];
	    printf("conver %c\n",conver[i]);
    }
    printf("suck len = %d\n",len);
    printf("the result is %s\n",result);
    //printf("this is %s\n", conver);
}
