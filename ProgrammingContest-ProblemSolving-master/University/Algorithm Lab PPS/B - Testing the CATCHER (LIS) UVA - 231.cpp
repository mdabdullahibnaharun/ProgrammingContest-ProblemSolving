
#include <iostream>
#include <algorithm>
#include <string>
#include <stdbool.h>
#include <cstdio>
#include <iterator>
#include <vector>
#include <map>
#include <set>

using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define sqre(x) ((x)*(x))
#define lli  long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 1001;
const int MAXX = 100005;
const int MAXN = 1e5 + 3;

//JUDGE_ID: 304332WQ

void solve()
{
    int n,i,j,test=0,inp[MAX-1];

    while(cin>>inp[0])
    {
        if(inp[0]<0)
            break;
        n=1;

        while(cin>>inp[n])
        {
            if(inp[n]<0)
                break;
            else
                n++;
        }

        int lis[MAX-1];
        for(i=0; i<n; i++)
        {
            lis[i]=1;
        }

        for(i=1; i<n; i++)
        {
            for(j=0; j<i; j++)
            {
                if(inp[i]<inp[j] && lis[i]<=lis[j])
                {
                    lis[i]=lis[j]+1;
                }
            }
        }

        int maximum = 0;
        for(i=0; i<n; i++)
        {
            if(maximum<lis[i])
            {
                maximum = lis[i];
            }
        }

        if(test)
        {
            puts("");
        }
        printf("Test #%d:\n",test+=1);
        printf("  maximum possible interceptions: %d\n", maximum);
    }
}

int main()
{
    solve();
    return 0;
}
