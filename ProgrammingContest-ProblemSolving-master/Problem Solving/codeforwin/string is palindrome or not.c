#include<stdio.h>

#define MAX 100

int main()
{
    char str[MAX];
    int startindex,endindex,len=0;

    printf("Enter a string :");
    gets(str);

    while(str[len]!='\0')len++;

    startindex=0;
    endindex=len-1;

    while(startindex <= endindex){
        if(str[startindex]!=str[endindex])
            break;

        startindex++;
        endindex--;
    }

    if(startindex >= endindex){
        printf("String is palindrome\n");
    }
    else {
        printf("String is not palindrome\n");
    }

    return 0;
}
