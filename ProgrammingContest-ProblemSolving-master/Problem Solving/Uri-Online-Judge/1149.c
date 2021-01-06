#include<stdio.h>
int main()
{
    int a,n,p=0,sum=0;
    scanf("%d",&a);
    while(1)
    {
        scanf("%d",&n);
        if(n>0)goto w;
    }
    w:
    while(n--)
    {
        sum+=a;
        a++;
    }
    printf("%d\n",sum);
    return 0;
}
