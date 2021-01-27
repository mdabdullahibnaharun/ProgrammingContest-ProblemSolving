#include<stdio.h>
int main()
{
    int t,i;
    long long int a,b,s;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld",&a,&b);
        printf(" \n");
        printf("Case %d: \n",i);
        printf(" \n");
        printf("%lld + %lld = %lld\n \n",a,b,a+b);
    }
    return 0;
}
