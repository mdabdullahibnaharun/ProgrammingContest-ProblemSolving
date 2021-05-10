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
    char str[1000];
    int n;

    while(scanf("%d %s",&n,&str)!=EOF){
        int x = n/11;
        int y = 0;
        for(int i = 0 ; i < n ; i++){
            if(str[i]=='8')y++;
        }
        printf("%d\n",min(x,y));
    }
}

int main(){
    solve();
    return 0;
}
