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

void solve(){

    int stones[MAXN];
    int pref[MAXN];

    int n,i,p;
    cin>>n;

    for(i=1;i<=n;i++){
        cin>>stones[i];
    }

    pref[1]=0;
    pref[2]=abs(stones[1]-stones[2]);

    for(i=3; i<=n; i++)
    {
        pref[i]=min(abs(stones[i]-stones[i-1])+pref[i-1], abs(stones[i]-stones[i-2])+pref[i-2]);
    }
    printf("%d\n", pref[n]);
}

int main(){
    solve();
    return 0;
}
