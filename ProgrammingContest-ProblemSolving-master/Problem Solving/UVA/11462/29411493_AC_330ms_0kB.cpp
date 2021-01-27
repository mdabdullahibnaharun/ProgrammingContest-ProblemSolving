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

void solve()
{

    int i,j,t,k;
    while(scanf("%d",&t))
    {
        if(t==0)break;

        lli arr[t];
        for( i = 0 ; i<t ; i++)
            scanf("%ld",&arr[i]);

        sort(arr,arr+t);

        printf("%ld ",arr[0]);
        for (i = 1 ; i<t-1 ; i++)
            printf("%ld ",arr[i]);

        printf("%ld\n",arr[i]);

    }

}

int main()
{
    solve();
    return 0;
}
