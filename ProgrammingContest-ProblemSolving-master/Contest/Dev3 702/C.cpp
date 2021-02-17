#include<cstdio>
#include<string>
#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>

using namespace std;
#define cubes(x) ((x)*(x)*(x))
#define lli long long int
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        lli n,flag=0;
        cin>>n;

        n=sqrt(n);
        for(int i = 1 ; i <=n ; i++)
        {
            for(int j = 1 ; j<=n ; j++)
            {
                if((cubes(i)+cubes(j))==n)
                {
                    flag=1;
                    break;
                }
            }
        }

        if(flag)
        {
            printf("YES\n");
        }
        else if(n<=1)
            printf("NO\n");
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
