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

/*
#include <stdio.h>
int main()
{
    long long int i,n,sum=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%lld",sum);
    return 0;
}*/
