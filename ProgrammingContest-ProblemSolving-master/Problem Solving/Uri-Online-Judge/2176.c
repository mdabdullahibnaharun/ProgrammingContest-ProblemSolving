#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char n[1000];
    scanf("%s",n);
    int len=strlen(n);
    if(n[0]==1){
        n[len]=n[0];
        n[len+1]='\0';
        printf("%s\n",n);
    }
    else{
        n[len]=n[0];
        n[len+1]='\0';
        printf("%s\n",n);
    }
    return 0;
}
