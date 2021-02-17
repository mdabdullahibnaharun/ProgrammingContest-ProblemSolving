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
    int n;
    scanf("%d",&n);

    if(n<=3)
    {
        printf("YES\n1\n");
    }

    else if(n<=6)
    {
        printf("YES\n2\n");
    }

   else  if(n<=9)
    {
        printf("YES\n3\n");
    }

    else
    {
        printf("NO\n");
    }
    return 0;
}

