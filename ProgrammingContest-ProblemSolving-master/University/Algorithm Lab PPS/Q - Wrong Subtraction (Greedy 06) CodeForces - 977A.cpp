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


void solve(){
    int n,k;
    cin>>n>>k;
    while(k--){
        if(n%10==0){
            n/=10;
        }else{
            n--;
        }
    }
    cout<<n<<endl;
}

int main(){
    solve();
    return 0;
}
