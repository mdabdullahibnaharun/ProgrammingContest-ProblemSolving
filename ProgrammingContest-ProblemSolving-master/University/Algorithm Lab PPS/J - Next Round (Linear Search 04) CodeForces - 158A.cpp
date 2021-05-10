
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


void solve()
{
    int i,n,k,cnt=0;
    scanf("%d %d",&n,&k);
    int arr[50];

    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    for(i=0; i<n; i++)
    {
        if(arr[i]>=arr[k-1]&&arr[i]>0)
            cnt++;
    }
    printf("%d\n",cnt);
}

int main()
{
    solve();
    return 0;
}
