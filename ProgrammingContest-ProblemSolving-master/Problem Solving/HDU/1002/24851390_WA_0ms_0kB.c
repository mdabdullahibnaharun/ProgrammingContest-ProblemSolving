#include<stdio.h>
int main()
{
    long long int i,t,a,b,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld",&a,&b);
        printf("Case %lld:\n",i);
        s=a+b;
        printf("%lld + %lld = %lld\n",a,b,s);
    }
return 0;
}
