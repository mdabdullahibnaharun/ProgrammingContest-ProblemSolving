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
const int MAX = 500005;
const int MAXN = 1e5 + 3;


void solve()
{
    int arr[MAX];
    int tc;
    scanf("%d",&tc);

    while(tc--)
    {
        int j,n;
        scanf("%d",&n);

        for(int i = 0 ; i < n ; i++)
        {
            scanf("%d",&arr[i]);
        }

        int mx = -200000 ;
        int  mxdiff = -200000;

        for(j=0; j<n-1; j++)
        {
            if(mx<arr[j]) mx = arr[j];
            if(mx-arr[j+1]>mxdiff) mxdiff = mx-arr[j+1];
        }

        printf("%d\n",mxdiff);
        j=0;
    }

}

int main()
{
    solve();
    return 0;
}
