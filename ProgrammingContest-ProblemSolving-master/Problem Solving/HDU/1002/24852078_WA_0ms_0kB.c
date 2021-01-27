#include<stdio.h>
int main()
{
    int t,i;
    unsigned long long int a,b,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%llu %llu",&a,&b);
        s=a+b;
        printf("Case %d:\n",i);
        printf("%llu + %llu = %llu\n",a,b,s);
        s=0;
    }
return 0;
}
