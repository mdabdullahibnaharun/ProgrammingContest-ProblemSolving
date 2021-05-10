
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

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l+(r-l)/2;

        if (arr[m] == x)
        {
            return m;
        }

        if (arr[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    return -1;
}

void solve()
{
    int n , m, q;
    cin >> n;
    int arr[MAX];
    arr[0] = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        arr[i] =arr[i] + arr[i - 1];
    }
    sort(arr,arr+n);
    cin >> m;
    while(m--)
    {
        cin >> q;
        cout << binarySearch(arr, 0,n,q) << endl;
    }
}

int main()
{
    solve();
    return 0;
}
