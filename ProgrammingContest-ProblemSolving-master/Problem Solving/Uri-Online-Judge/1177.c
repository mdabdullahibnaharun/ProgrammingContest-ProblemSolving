#include<stdio.h>
int main()
{
    int i,n,T,N[1000];
    scanf("%d",&T);
    for(i=0,n=0;i<1000;i++){
        printf("N[%d] = %d\n",i,n);
        n++;
        if(n==T)n=0;
    }
    return 0;
}
