#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    unsigned long int a,b,s;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lu %lu",&a,&b);
        printf("Case %d:\n",i);
        printf("%lu + %lu = %lu\n",a,b,a+b);
        printf("\n");
    }
    return 0;
}
