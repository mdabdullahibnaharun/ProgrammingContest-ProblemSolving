#include<stdio.h>
int main()
{
    int i,x[10];
    for(i=0; i<10; i++)
    {
        scanf("%d\n",&x[i]);
        x[i]=(x[i]<0 || x[i]==0)? 1 : x[i];
    }
    for(i=0; i<10; i++)
    {
        printf("X[%d] = %d\n",i,x[i]);
    }
    return 0;
}
