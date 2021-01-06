#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=2; i<=10000; i=i+N)
    {
        printf("%d\n",i);
    }
    return 0;

}
