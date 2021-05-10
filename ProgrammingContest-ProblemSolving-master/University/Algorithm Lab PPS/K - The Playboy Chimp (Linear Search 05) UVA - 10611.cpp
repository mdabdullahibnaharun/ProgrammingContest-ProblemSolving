#include<bits/stdc++.h>
using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define lli   long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 100005;


void solve()
{
    int i ,tc;
    cin>>tc;
    lli ar[MAX];

    for(i=0; i<tc; i++)
        scanf("%ld",&ar[i]);

    vector<lli> v(ar,ar+tc);
    vector<lli>::iterator upperbound,lowerbound;

    sort(all(v));

    int t;
    scanf("%d",&t);

    while(t--)
    {
        lli q;
        scanf("%ld",&q);

        upperbound = upper_bound(all(v),q);
        lowerbound = lower_bound(all(v),q);

        if(lowerbound-v.begin() == 0)
        {
            printf("X ");
        }
        else
        {
            printf("%ld ",*--lowerbound);
        }

        if(upperbound-v.begin() == tc)
        {
            printf("X\n");
        }
        else
        {
            printf("%ld\n",*upperbound);
        }

    }
}





int main()
{
    solve();
    return 0;
}
