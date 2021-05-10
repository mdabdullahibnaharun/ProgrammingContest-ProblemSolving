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
    int i,tc,j;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++){
        int m;
        scanf("%d",&m);
        int mx =0;
        for(j=0;j<m;j++){
            int p;
            scanf("%d",&p);
            if(p>mx)mx=p;
        }
        printf("Case %d: %d\n",i,mx);
    }
}


int main()
{
    solve();
    return 0;
}

