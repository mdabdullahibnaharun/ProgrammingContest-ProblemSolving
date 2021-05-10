#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>
#include <stdbool.h>
#include <cstdio>
#include <vector>
#include <set>

using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define sqre(x) ((x)*(x))
#define lli   long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 100005;
const int MAXN = 1e5 + 3;


int getMinPageTurns(int n, int k,int d){
   if (n % 2 == 0) {
      ++n;
   }
   return min((k + 1) / 2, (n -k + d) / 2);
}

void solve()
{
    int tc,n,x,y,d;
    scanf("%d",&tc);
    while(tc--)
    {
        int mv = 0;
        scanf("%d %d %d %d",&n,&x,&y,&d);
        if((x+d)>=n)mv=-1;
        else if((x+d)>y)
        {
            mv = getMinPageTurns(n,y,d)+1;
        }
        else{
            int temp = x;
            while(temp!=y){
                temp+=d;
                mv++;
            }
            //mv = getMinPageTurns(n,y,d);
        }
        printf("%d\n",mv);
    }

}

int main()
{
    solve();
    return 0;
}
