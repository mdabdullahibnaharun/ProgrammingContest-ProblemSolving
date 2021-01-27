#include<stdio.h>
#include<math.h>
long long int t,n;
long long int x;

int main()
{

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int flag=n;
        long long int co=0,ce=0;
        while(flag--)
        {
            scanf("%d",&x);
            if(x%2==0)
            {
                ce++;
            }
            else
            {
                co++;
            }
        }
        if(ce==n)
        {
            printf("NO\n");
        }
        else if(co==n)
        {
            if(n%2==0)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
