#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <string>
#include <stdbool.h>
#include <cstdio>
#include <iterator>
#include <vector>
#include <map>
#include <set>

using namespace std;

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

//JUDGE_ID: 304332WQ

void solve()
{

    ll arr[MAXX],n,i;
    cin>>n;
    cin.ignore();

    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    sort(arr,arr+n);

    for (i = 0; i < n; i++ )
    {
        printf("%lld ", arr[i]);
    }

}

int main()
{
    solve();
    return 0;
}
