#include<stdio.h>
int main()
{
    int i,n,t,x,m,p,y=0;
    scanf("%d",&n);
    while(n!=0)
    {   --n;
        scanf("%d",&x);
        for(i=2; i<x; i++)
       {
            if(x%i==0)
                y++;
            else
                continue;
        }
        if(y!=0)
        {
            printf("%d nao eh primo\n",x);
        }
        else
        {
            printf("%d eh primo\n",x);
        }
        x=0;y=0;
    }
    return 0;
}
