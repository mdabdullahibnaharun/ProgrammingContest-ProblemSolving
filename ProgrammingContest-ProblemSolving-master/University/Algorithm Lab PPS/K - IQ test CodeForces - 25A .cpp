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
    int e=0,o=0,i,j,x,y,t;
    scanf("%d",&t);

    int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            e++;
            x=i+1;
        }
        else
        {
            o++;
            y=i+1;
        }
    }
    if(e==1) printf("%d\n",x);
    else if(o==1) printf("%d\n",y);

}

int main()
{
    solve();
    return 0;
}

