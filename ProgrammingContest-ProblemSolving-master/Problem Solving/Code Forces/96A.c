#include<stdio.h>
#include<string.h>

#define MAX 101

int main()
{
    char str[MAX];
    gets(str);

    int one=0;
    int zero=0;

    int n=0;
    while(str[n]!='\0'){
        if(str[n]=='1')
            one++;
        else if(str[n]=='0')
            zero++;
        n++;
    }

    if(zero>=7){
        printf("YES\n");
    }
    else if(one>=7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
