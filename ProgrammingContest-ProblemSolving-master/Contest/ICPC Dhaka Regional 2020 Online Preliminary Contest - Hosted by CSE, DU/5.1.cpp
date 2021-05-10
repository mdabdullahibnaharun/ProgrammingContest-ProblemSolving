#include<stdio.h>
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
    int i,j,t,n,sum=0,c=0;
    int arr[30000];

    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for( i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);

        }

        for(i= 1;i<=n;i++)
        {
            if(arr[i] >= 0)
            {
                 sum=sum+arr[i];

            }
            else if(arr[i] < 0)
            {
                c++;
            }
        }

        printf("Case %d: %d %d\n",i,sum,c);
        sum = 0;
        c = 0;
    }

    return 0;
}
