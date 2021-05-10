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
const int MAX = 1000005;

void solve(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        string str;
        cin>>str;

        int siz = str.size();
        if(siz<=10){
            cout<<str<<endl;
        }
        else{
            cout<<str[0]<<siz-2<<str[siz-1]<<endl;
        }
    }
}

int main(){
    solve();
    return 0;
}
