#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <math.h>
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

int binarySearch(int arr[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

void solve()
{
    int arr[MAXX];
    int x,i,n;
    int res;
    cin>>n>>x;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr,arr+n);

    res = binarySearch(arr, x, 0, n - 1);
    if (res == -1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}

int main()
{
    solve();
    return 0;
}
