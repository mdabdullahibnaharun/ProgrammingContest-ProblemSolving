#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    while(scanf("%d ",&n)!=EOF){
        char s[n*2+1];
        gets(s);
        i=strlen(s);
        if(s[0]=='1' || s[i]=='1'){
            printf("impeachment\n");
        }
        else{
            printf("acusacao arquivada\n");
        }
    }
    return 0;
}
