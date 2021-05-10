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


void solve()
{
    int a[MAX] , b[MAX];
    int n,cnt=0;
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        scanf("%d %d",&a[i],&b[i]);
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(a[i] == b[j]){
                cnt++;
            }
        }
    }

    printf("%d\n",cnt);
}


int main()
{
    solve();
    return 0;
}


