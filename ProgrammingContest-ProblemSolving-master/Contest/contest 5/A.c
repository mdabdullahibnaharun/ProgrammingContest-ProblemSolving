#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d", &a);
    while(a--)
    {
        scanf ("%d", &c);
        if(c>10)
        {
            d=c-10;
            e=10;
            printf("%d %d\n",d,e);
        }
        else
        {
            d=0;
            printf("%d %d\n",d,c);
        }
    }
    return 0;
}

/*
other type
#include <stdio.h>
int main()
{
    int x,i,a,b,c;
    scanf("%d", &a);
    for(i=0; i<x; i++)
    {
        scanf("%d",&a);
        if(a>10)
        {
            b=a-10;
            c=10;
            printf("%d %d\n",b,);
        }
        else
        {
            d=0;
            printf("%d %d\n",b,a);
        }
    }
    return 0;
}*/
