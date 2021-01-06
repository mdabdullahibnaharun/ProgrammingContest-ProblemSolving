#include<stdio.h>
int main()
{
    int m=-1,p,i,a;
    for(i=1; i<101;++i)
    {
        scanf("%d",&a);
        if(m<a)
        {
            m=a;
            p=i;
        }

    }
    printf("%d\n%d\n",m,p);
    return 0;
}
