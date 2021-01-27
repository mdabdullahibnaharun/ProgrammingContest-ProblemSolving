#include<stdio.h>
int main()
{
    int t,i;
    int a,b,s;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&a,&b);
        //printf(" \n");
        printf("Case %d:\n",i);
        //printf(" \n");
        printf("%d + %d = %d\n \n",a,b,a+b);
    }
    return 0;
}
