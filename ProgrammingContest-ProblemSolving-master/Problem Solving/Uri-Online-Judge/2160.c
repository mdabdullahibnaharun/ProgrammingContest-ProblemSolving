#include<stdio.h>
int main()
{
    char str[501];
    int L=0;

    gets(str);

    while(str[L]!='\0')L++;

    //printf("%d\n",L);

    if(L<=80){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
