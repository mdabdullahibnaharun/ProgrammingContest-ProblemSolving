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


void solve()
{

    int sum = 0,n,arr[MAX];
    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int even = 0 , odd = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i]%2)even++;
            else odd++;
        }
       if(even && odd){
            printf("NO\n");
       }else{
           printf("YES\n");
       }
    }

}

int main()
{
    solve();
    return 0;
}

