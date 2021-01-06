#include<stdio.h>
int main()
{
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        char s[100];
        gets(s);
        int len=0;
        while(s[len]!='\0')len++;
        if(len>=0 && len<=25){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }
    return 0;
}
