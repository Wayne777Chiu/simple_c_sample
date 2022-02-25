#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x){
    int count=0;
    int tmpdata=x;
    bool ret=false;
    int arr[10]={[0 ... 9]=0};
    
    if (x < 0)  return false;
    if (x <= 9) return true;
    
    while (tmpdata > 9) {
        arr[count++]= tmpdata%10;
        tmpdata /=10;
    }
    
    if (tmpdata<10){
        arr[count++]=tmpdata;
    }
    
    int limit =count%2 ? ((count/2)+1):(!!count ? (count/2): 1);
    for (int i=0;i<limit;i++)
    {
        if (arr[i]==arr[count-1-i]){
            ret= true;
        } else {
            ret = false;
            break;
        }
    }
    return ret;
}

void main()
{
    int num;
    printf("Please enter the number:");
    scanf("%d" ,&num);
    if (isPalindrome(num)){
        printf("The number %d is Palindrome \n",num);
    } else {
        printf("The number %d is NOT Palindrome \n",num);
    }

}