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


int main(){
    int n;
    scanf("%d",&n);
    lli a[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    lli p = 1;
    for(int i = 0 ; i < n ; i++){
        if(a[i]>=p){
            p++;
        }
    }
    printf("%lld\n",--p);
    return 0;
}
