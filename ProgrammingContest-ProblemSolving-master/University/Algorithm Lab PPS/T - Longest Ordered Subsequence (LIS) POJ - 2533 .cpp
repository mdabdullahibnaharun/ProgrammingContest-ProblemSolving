#include <iostream>
#include <algorithm>
#include <string>
#include <stdbool.h>
#include <cstdio>
#include <iterator>
#include <vector>
#include <map>
#include <set>

using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define sqre(x) ((x)*(x))
#define lli  long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 1001;
const int MAXX = 100005;
const int MAXN = 1e5 + 3;

//JUDGE_ID: 304332WQ

int maximum(int a,int b){
    return (a>b)?a:b;
}

void solve()
{
    int n;
    int ans=0;
    int a[MAX],lis[MAX];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        lis[i]=1;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i-1; j++)
        {
            if(a[j]<a[i] && lis[j]+1>lis[i])
            {
                lis[i]=lis[j]+1;
            }
        }
        ans=maximum(ans,lis[i]);
    }
    printf("%d\n",ans);

}

int main()
{
    solve();
    return 0;
}
