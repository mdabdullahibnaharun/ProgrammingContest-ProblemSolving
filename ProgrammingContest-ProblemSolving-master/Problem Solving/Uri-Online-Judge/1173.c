#include<stdio.h>
int main()
{
    int i,N[10],n;
    scanf("%d",&n);
    for(i=0;i<10;i++){
        N[i]=n;
        n=N[i]+N[i];
    }
    for(i=0;i<10;i++)
    printf("N[%d] = %d\n",i,N[i]);
    return 0;
}
