#include<bits/stdc++.h>

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
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    ll N, a, b, m, gr, cnt = 0;
    int i=1,j=1;
    scanf("%lld",&N);
    while(N--)
    {
        scanf("%lld %lld %lld",&a,&b,&m);
        while(m)
        {
            gr = gcd(a + i, b + i);
            if (gr){
                cnt++;
            }
            i++;
            m--;
        }

        printf("Case %d: %d\n",j++,cnt);
        cnt = 0;
    }

}


int main()
{
    solve();
    return 0;
}
