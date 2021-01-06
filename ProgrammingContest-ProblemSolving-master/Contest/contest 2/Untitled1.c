#include<stdio.h>
int main()
{
    int N;
    int k;
    int i ;
    scanf("%d",&N);
    for( k= 1; k <= N; k++)
    {
        int sum = 0,n;
        scanf("%d",&n);
        for(i= 0; i < n; i++)
        {
            int x;
            scanf("%d",&x);
            if(x <= 0)
                continue;
            else
            {
                sum+=x;
            }
        }
        printf("Case %d: %d\n",k,sum);
    }
    return 0;
}
