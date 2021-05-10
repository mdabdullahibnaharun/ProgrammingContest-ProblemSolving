#include<bits/stdc++.h>

using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define sqre(x) ((x)*(x))
#define lli   long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 100005;
const int MAXN = 1e5 + 3;


void solve(){
    int T,t=0;
    cin>>T;
    while(T--){
        int n,i;
        int jmp=0;
        int mini;
        cin>>n;

        int v[MAX] = {};

        for(i = 1 ; i <=n ; i++){
            cin>>v[i];
        }

        for(i=1;i<=n;i++){
            if((v[i]-v[i-1])>jmp){
                jmp = v[i]-v[i-1];
            }
        }

        mini = jmp;

        for(i = 1; i <= n; i++) {
            if(v[i]-v[i-1] == jmp){
                jmp--;
            }
            else if((v[i]-v[i-1])> jmp) {
                mini++;
                break;
            }
        }
        printf("Case %d: %d\n", ++t, mini);

    }
}

int main(){
    solve();
    return 0;
}
