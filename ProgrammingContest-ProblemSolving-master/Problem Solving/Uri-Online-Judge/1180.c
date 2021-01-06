#include<stdio.h>

int main()
{
    int N,a,i,mini,count;
    scanf("%d",&N);
    int x[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",&x[i]);
    }
    mini=x[0];
    for(a=1; a<N; a++)
    {
        if(mini>x[a])
        {
            mini=x[a];
            count=a;
        }
    }
    printf("Menor valor: %d\n",mini);
    printf("Posicao: %d\n",count);
    return 0;
}
