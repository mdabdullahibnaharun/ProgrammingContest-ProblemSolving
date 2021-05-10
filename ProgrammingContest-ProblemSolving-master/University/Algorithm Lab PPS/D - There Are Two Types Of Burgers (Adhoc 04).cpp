#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>
#include <cstdio>
#include <vector>
#include <set>

using namespace std;




void solve()
{
    int t,h,b,p,f,c,burger;
    int sum=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&b,&p,&f);
        scanf("%d %d",&h,&c);

        burger = b/2;

        if(h>c)
        {
            if(burger>=p)
            {
                sum = p*h;
                b = burger-p;
                if(b>=f)
                {
                    sum += f*c;
                }
                else
                {
                    sum += b*c;
                }
            }
            else
            {
                sum = burger*h;
            }
        }

        else
        {
            if(burger>=f)
            {
                sum = f*c;
                b = burger-f;
                if(b>=p)
                {
                    sum += p*h;
                }
                else
                {
                    sum += b*h;
                }
            }
            else
            {
                sum = burger*c;
            }
        }
        printf("%d\n",sum);
    }

}

int main()
{
    solve();
    return 0;
}

