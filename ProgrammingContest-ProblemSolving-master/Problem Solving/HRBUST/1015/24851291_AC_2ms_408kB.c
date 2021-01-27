#include<stdio.h>
int main()
{
    long long int n,m,sum=0;

    while(scanf("%lld",&m)!=EOF){
    for(n=1;n<=m;n++){
        sum+=n;
    }
    printf("%lld\n",sum);
    sum=0;
    }
    return 0;
}