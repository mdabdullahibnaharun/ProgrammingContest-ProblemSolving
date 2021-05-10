#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stdbool.h>

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

int comp(int a,int b){
    return a>b;
}

void solve()
{
    while(true)
    {
        int n,d,r,pay=0;
        scanf("%d %d %d",&n,&d,&r);
        if(n==0 && d==0 && r==0)
            break;
        int a[n];
        int b[n];

        for(int i = 0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        for(int i = 0 ; i<n ; i++)
        {
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+n,comp);

        for(int i = 0 ; i < n ; i++)
        {
            if(a[i]+b[i]>d)
            {
                pay+=(a[i]+b[i]-d)*r;
            }
        }
        printf("%d\n",pay);
    }
}

int main()
{
    solve();
    return 0;
}
