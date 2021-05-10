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

    string s,tmp;
    cin>>s;
    int len = s.size();
    int i,j;
    for(i=0;i<len-2;i++){
        for(j=0;j<len-i-2;j++){
            if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }
        }
    }
    cout<<s<<endl;
}

int main(){
    solve();
    return 0;
}

