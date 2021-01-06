#include<stdio.h>
int main()
{
    int i,N,b;
    scanf("%d",&N);
    for(i=2; i<=N;i=i+2)
    {
        b=i*i;
        printf("%d^2 = %d\n",i,b);
    }
    return 0;
}
