
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void one_ptr(char *s);
void diff_ptr_n_array(char *ptr, char *arrptr);

void main()
{
    char *ptr_string="abcd";
    char arr_string[4]= "ABCD";


    char *str="abcd";
    char *conver="1234",p;
    char anstr[4]="iuyt";
    char result[10];
    int i,len;
    //one_ptr(anstr);
    //one_ptr(str);

    diff_ptr_n_array(ptr_string, arr_string);

#if 0
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
#endif
}
void diff_ptr_n_array(char *ptr, char *arrptr)
{
    printf("FUNCTION: %s \n",__func__);
    printf("In this part, we explain the different between pointer string & array string\n");
    printf("We set two string to descript:\n");
    printf("A: pointer string (char *ptr_string=\"abcd\";): %s\n",ptr);
    printf("B: array string   (char arr_string[4]= \"ABCD\";) (arrptr): %s\n", arrptr);
    printf("1. Change one char ex. array[1], *(ptr+1)\n");
    printf("   Let the char on index 1 position to become '2'\n");
   
    printf("f: arr_string[1] = '2'; \n");
    arrptr[1] = '2';
    printf(" printf the string (arrptr): %s\n", arrptr);

    printf("f: *(arr_string +1) = '3'\n");
    *(arrptr + 1) = '3';
    printf(" printf the string (arrptr): %s\n", arrptr);


    printf("If you use the *ptr as string for clarm,\n");
    printf("you will got error. ex. below is sample\n");     
    printf("f: ptr_string[1] = '2'; \n");
    printf("Or\n");
    printf("f: *(ptr +1) = '3'\n");
#if 0
    ptr[1] = '2';
    printf(" printf the string (ptr): %s\n", ptr);

    *(ptr + 1) = '3';
    printf(" printf the string (ptr): %s\n", ptr);
#endif
    printf("We got same result: (Segmentation fault)\n");
    printf("!!!Error: Segmentation fault (core dumped)\n");
    
    char *ptr2 = ptr;
    char *ptr3 = "HDMI";
    *ptr++ = *ptr3++;
    printf("rsult is %s\n",ptr2);

    printf("another method Dynamic string (malloc) \n");
    char *dptr = malloc(strlen(ptr));
    dptr = "EFGH";
    *(dptr+1) = '2';
    printf("print the string(dptr):%s \n",dptr);


    printf("But if we really want to update\n");
    printf("set %s \n", ptr+1);    
#if 1
    printf("\test lenght");
    char hel[10] = "2345";
    char *helptr ="4567";
    int len1 = strlen(hel),len2= strlen(helptr);
    printf("length %s %d %s %d\n", hel, len1, helptr, len2);
 
char **pptr;
char *aptr1;
    aptr1 = ptr;
    ptr = ptr+1;
    printf("23423\n");
    pptr = &(ptr);
    //aptr1[0] = 'c';
    printf(" ptr char one %c\n",ptr[0]);   
    printf("1 pptr %s \n",*pptr);
    *pptr = "cc";

    printf("1 pptr %s \n",*pptr);
  
//  **ptr = '3'; 
    printf("2\n");
//    printf(" the result s %s\n",*ptr);
    char c ='\n';
    printf(" \\0 printf %c\n",c);
    printf("3\n");
#endif
}

void one_ptr(char *s)
{
    int len = strlen(s);
    int i;
    char tmp;
    char **tmp2;
    tmp2 = &s;
    printf("the origin string: %s\n",s);
    printf("the len is %d \n",len);
    for(i=0; i<(len/2);i++)
    {

         printf("1111111111\n");
         tmp = *(s+i);
         printf("222222222222\n");
         printf("tmp %c\n", tmp);
         printf("the value index %d\n",len-1-i);
         printf("the s+3 should be %c\n", *(s+len-1-i));
         
          s[i] ='3';
            printf("s is %s \n",s);

        *tmp2 = &tmp;
        printf("s is %s \n",s);
         //*(s+i) = *(s+len-1-i);
        printf("33333333333333\n");
 
        *(s+len-1+i) = tmp; 
        printf("444444444444444\n");
    }
    printf("the reverse str: %s\n",s);
}

