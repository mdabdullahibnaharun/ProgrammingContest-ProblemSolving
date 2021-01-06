#include<stdio.h>
int main()
{
    int N,i,b=1,c,k=4;;
    scanf("%d",&N);

    while(N--)
    {
        for( i=b; i<=k; i++)
        {
            if(i%4==0)
            {
                printf("PUM\n");
            }else{
                printf("%d ",i);
            }
        }
        b+=4;
        k+=4;
    }
    return 0;
}
