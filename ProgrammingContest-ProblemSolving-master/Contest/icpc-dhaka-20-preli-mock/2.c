#include<stdio.h>
#include<stdlib.h>

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
    int t,i=1;
    scanf("%d",&t);
    while(t--)
    {
        int j, k;
        lli p=1,n;
        scanf("%d",&k);
        for(j = 0 ; j < k ; j++)
        {
            scanf("%lld",&n);
            p*=n;
        }
        printf("Case %d: %lld\n",i++,p);
    }
    return 0;
}
