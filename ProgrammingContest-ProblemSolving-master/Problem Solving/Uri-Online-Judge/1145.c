#include<stdio.h>
int main()
{
    int X, Y, i , c=0;
    scanf("%d %d",&X,&Y);
    if(X<Y)
    {
        for(i=1; i<=Y; i++)
        {
            printf("%d ",i);
            c++;
            if(c==X)
            {
                printf("\n");
                c=0;
            }
        }
    }
    return 0;
}
