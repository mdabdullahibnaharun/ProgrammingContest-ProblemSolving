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
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
    {
        printf("Equilateral Triangle\n");
    }
    else if(a==b || a==c || b==c)
    {
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Bad Triangle\n");
    }

    return 0;
}
