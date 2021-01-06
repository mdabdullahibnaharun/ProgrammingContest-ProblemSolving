#include<stdio.h>
int main()
{
    int N, x,y,sum=0,a,i;
    scanf("%d",&N);
    if(N>0)
    {
        for(i=1; i<=N; i++)
        {
            scanf("%d %d",&x,&y);
            if(x==y){
                printf("0\n");
                continue;
            }
            else if(x<y)
            {
                for(a=x+1; a<y; a++)
                {
                    if(a%2==1||a%2==-1)
                    {
                        sum+=a;
                    }
                }
                printf("%d\n",sum);
                sum=0;
                x=0, y=0 ,a=0;
            }
            else if(x>y)
            {
                for(a=y+1; a<x; a++)
                {
                    if(a%2==1||a%2==-1)
                    {
                        sum+=a;
                    }
                }
                printf("%d\n",sum);
                sum=0;
                x=0, y=0,a=0;
            }
        }
    }
    return 0;
}
