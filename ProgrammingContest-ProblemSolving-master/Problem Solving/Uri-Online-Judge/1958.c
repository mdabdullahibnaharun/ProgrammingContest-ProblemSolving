#include<stdio.h>
int main()
{
    long double n;
    scanf("%lld",&n);
    if(n>0)
        printf("+");
    else
        printf("-");
    printf("%E\n",n);
    return 0;
}
