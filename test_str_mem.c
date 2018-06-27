
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char *str="abcd", *ptr;
    char c;
    char *dynarr;
    int strlen = 0;
    char copystr[10];
    
    printf("This is a test for string inverse - ex. string \"abcd\" -> \"dcba\"\n");
    printf("use method with memcpy /memset \n");
    printf("\n");
    printf("==============\n");

    printf("First set: we haave origin string:(str) \"%s\"\n",str);
    printf("A copy array: copystr[10];\n"); 

    memcpy(copystr,str,sizeof(str));
    printf("If we use memcpy(*det,*sur, size) then ");
    printf("We got the copy str(copystr]: %s\n",copystr);
    
    ptr = str;
    while ((c=*ptr++)!= '\0'){
        printf("%c", c);
        strlen++; 
    } 

    printf("\nstrlen is %d\n",strlen);

    dynarr = malloc((strlen+1) *sizeof(char));
    printf("we can use malloc to create array \n");
    printf("    dynarr = malloc(strlen * sizeof(char)); \n");
    printf("or we can create memory and initalization \n");
    printf("    dynarr = calloc(strlen * sizeof(char));\n");
    
    //Initialization 
    printf("Use memset(*ptr, value, size) to initialize data:\n");
    memset (dynarr,  0, (strlen+1)*sizeof(char));   
    
    int i=strlen;
    for (ptr = dynarr; i!=0; ptr++)
    {
       *ptr = *(str+ (--i));
       printf("str[%i]: %c ==> dynarr[%d]\n",i, *(str+i),strlen-i-1);

    }
    dynarr[strlen] = '\0';    

    printf("The dynarr is %s\n ",dynarr);
}
