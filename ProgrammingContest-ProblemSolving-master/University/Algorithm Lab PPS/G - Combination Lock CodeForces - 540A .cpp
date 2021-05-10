#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>
#include <stdbool.h>
#include <cstdio>
#include <vector>
#include <set>
#include <stdio.h>
#include <stdio.h>
#include <math.h>

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

int main ()
{
    int n,diff,cnt=0,mv=0;
    scanf("%d",&n);
    char ar[10000],ky[10000];
    cin>>ar>>ky;
    for(int i=0; i<n; i++)
    {
        diff=abs(ar[i]-ky[i]);
        if(diff>5)
        {
            mv=9-diff;
            mv++;
            cnt=cnt+mv;
        }
        else
        {
            cnt+=diff;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
