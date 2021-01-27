#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    unsigned long long int a,b,s;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%llu %llu",&a,&b);
        printf("Case %d:\n",i);
        printf("%llu  +  %llu =  %llu\n \n",a,b,a+b);
    }
    return 0;
}
