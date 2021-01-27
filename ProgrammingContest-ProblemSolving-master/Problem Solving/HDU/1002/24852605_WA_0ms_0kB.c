#include <stdio.h>
#include <math.h>
int main()
{
    int t,i;
    long long int a,b,s;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld",&a,&b);
        printf("Case %d:\n\n",i);
        s=a+b;
        printf("%lld + %lld = %lld\n",a,b,s);
        printf("");
        printf("\n");
    }
    return 0;
}
