<<<<<<< HEAD
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

int main()
{

    int ts,v,i;
    scanf("%d",&ts);
    for(v = 1 ; v<=ts; v++)
    {
        lli m,k;
        scanf("%lld %lld",&m,&k);

        lli a[MAX];
        lli b[MAX];

        for (i = 0; i < m; ++i)
        {
            scanf("%lld",&a[i]);
            scanf("%lld",&b[i]);
        }

        lli diff=0;

        lli x=abs(a[0]-a[1]);

        lli y=abs(b[0]-b[1]);

        diff=y/x;

        lli tmp=(a[0]-1)*diff;

        lli fst=b[0]-tmp;

        printf("Case %d: %lld\n",v,k*(2*fst+(k-1)*diff)/2);
        diff=0;
    }
    return 0;
}

=======
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

int main()
{

    int ts,v,i;
    scanf("%d",&ts);
    for(v = 1 ; v<=ts; v++)
    {
        lli m,k;
        scanf("%lld %lld",&m,&k);

        lli a[MAX];
        lli b[MAX];

        for (i = 0; i < m; ++i)
        {
            scanf("%lld",&a[i]);
            scanf("%lld",&b[i]);
        }

        lli diff=0;

        lli x=abs(a[0]-a[1]);

        lli y=abs(b[0]-b[1]);

        diff=y/x;

        lli tmp=(a[0]-1)*diff;

        lli fst=b[0]-tmp;

        printf("Case %d: %lld\n",v,k*(2*fst+(k-1)*diff)/2);
        diff=0;
    }
    return 0;
}

>>>>>>> db7bdc85a80e82f2983338b1b1b3a0776414abce
