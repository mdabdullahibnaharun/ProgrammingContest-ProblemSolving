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
        int i,t;
        scanf("%d",&t);

        int arr[t];
        for(i=0;i<t;i++)
            scanf("%d",&arr[i]);

        sort(arr,arr+t);
        printf("%d\n",(arr[t-1]-arr[0])*2);
    }
}

int main(){
    solve();
    return 0;
}
