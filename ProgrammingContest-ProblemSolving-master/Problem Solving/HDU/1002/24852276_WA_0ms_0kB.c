#include<stdio.h>
int main()
{
    int t,i;
    long long int a,b,s;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld",&a,&b);
        printf("Case %d:\n",i);
        printf("%lld + %lld = %lld\n",a,b,a+b);
        printf("\n");
    }
    return 0;
}
