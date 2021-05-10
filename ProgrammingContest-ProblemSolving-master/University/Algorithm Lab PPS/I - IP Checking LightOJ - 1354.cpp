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

int decToBinary(int n)
{
    int binaryNumber = 0;
    int remainder, i = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;

}

void solve(){
    int T,a,b,c,d,i,j,k,l;
    scanf("%d",&T);
    int p = 1;
    while(T--)
    {
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%d.%d.%d.%d",&i,&j,&k,&l);

        if(decToBinary(a)==i&&decToBinary(b)==j&&decToBinary(c)==k&&decToBinary(d)==l)
        {
            printf("Case %d: Yes\n",p++);
        }
        else
        {
            printf("Case %d: No\n",p++);
        }

    }
}

int main(){
    solve();
    return 0;
}

