#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>
#include <stdbool.h>
#include <cstdio>
#include <vector>
#include <set>

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

void solve()
{
    int i,tc,j,t;
    cin>>tc;
    int arr[tc],csumarr[tc];
    for(i=0; i<tc; i++)
        cin>>arr[i];

    cin>>t;
    while(t--)
    {
        int sum = 0;
        cin>>i>>j;
        for(i;i<=j;i++){
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }

}

int main()
{
    solve();
    return 0;
}
