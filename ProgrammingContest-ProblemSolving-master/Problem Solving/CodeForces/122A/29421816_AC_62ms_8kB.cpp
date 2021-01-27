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
    int div[]= {47,74,744,474,4,7,77,44,444,777,447,477,747,774};
    int i,j,k=FALSE;
    int sz = sizeof(div)/sizeof(div[0]);
    scanf("%d",&j);

    for(i=0; i<sz; i++)
    {
        if(j%div[i]==0)
        {
            k++;
        }
    }
    if(k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    k=0;

}

int main()
{
    solve();
    return 0;
}
