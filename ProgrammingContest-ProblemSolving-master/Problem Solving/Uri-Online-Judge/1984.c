#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long long int n,m=0,r;
    scanf("%llu",&n);
    while(n){
        r=n%10;
        printf("%llu",r);
        n/=10;
    }putchar('\n');
    return 0;
}
