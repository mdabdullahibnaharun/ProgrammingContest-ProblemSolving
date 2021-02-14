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
const int MAXN = 1e5 + 3;


int main()
{
    lli run,bll,total=0;
    scanf("%lld",&run);

    bll = run%6;
    total = (run/6)*33;
    total += bll*6;

    if(bll == 0){
        total+=3;
    }

    printf("%lld\n",total);
    return 0;

}
