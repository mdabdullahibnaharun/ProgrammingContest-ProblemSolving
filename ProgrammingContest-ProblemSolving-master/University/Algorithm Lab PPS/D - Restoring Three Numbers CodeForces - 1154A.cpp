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
    int i;
    lli arr[4];

    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

    sort(arr,arr+4);

    lli a = arr[3] - arr[0];
    lli b = arr[3] - arr[1];
    lli c = arr[3] - arr[2];

    cout << a << " " << b << " " << c << endl;

}

int main(){
    solve();
    return 0;
}
