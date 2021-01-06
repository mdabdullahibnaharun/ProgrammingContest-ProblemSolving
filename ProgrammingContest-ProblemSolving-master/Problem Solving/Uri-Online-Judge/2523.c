#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    int i,n;

    while(scanf("%s",s)!=EOF){
        scanf("%d",&n);
        while(n--){
            scanf("%d",&i);
            printf("%c",s[i-1]);
        }
        putchar('\n');
    }
    return 0;
}
