#include<bits/stdc++.h>
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
int main()
{

    ull t;
    cin>>t;

    for(ull i=1; i<=t; i++)
    {
        ull n;
        cin>>n;
        ull a[n+20];
        ull p=1;
        for(ull i=1; i<=n; i++)
        {
            cin>>a[i];
            p*=a[i];
        }

        if(n==1)
        {
            printf("Case %lld: %lld\n",i,p*p);
        }
        else
        {
            printf("Case %lld: %lld\n",i,p);
        }
    }
}



int mini(int a,int b){
    return (a>b)?b:a;
}
int maxi(int a,int b){
    return (a>b)?a:b;
}
/*
int main()
{
    ll t, a, mni, mxi,n;
    cin>>t;
    for (lli i = 1; i <= t; i++){
        cin>>n;
        mni = 100000000000000;
        mxi = 0;
        while(n--){
            cin>>a;
            mni = mini(mni, a);
            mxi = maxi(mxi, a);
        }
        printf("Case %lld: %lld\n",i,mni*mxi);
    }
    return 0;
}
*/
