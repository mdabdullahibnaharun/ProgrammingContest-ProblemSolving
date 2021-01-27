#include<stdio.h>
int main()
{
    long long int n,m,sum=0;
    scanf("%lld",&m);
    for(n=1;n<=m;n++){
        sum+=n;
    }
    printf("%lld\n",sum);
    return 0;
}
