
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdbool.h>
#include <cstdio>
#include <iterator>
#include <vector>
#include <map>
#include <set>

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

ll maximum(ll a, ll b){
    return (a>b)?a:b;
}

ll knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    ll K[n+1][W+1];

    // Build table K[][] in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0){
                K[i][w] = 0;
            }
            else if (wt[i - 1] <= w){
                K[i][w] = maximum(val[i - 1]+ K[i - 1][w - wt[i - 1]],K[i - 1][w]);
            }
            else{
                K[i][w] = K[i - 1][w];
            }
        }
    }

    return K[n][W];
}

void solve()
{
    int i;
    int n,w;
    cin>>n;
    cin>>w;

    int unitprice[n];
    int weight[n];

    for(i=0; i<n; i++)
    {
        cin>>weight[i];
        cin>>unitprice[i];
    }
    cout<<knapSack(w, weight,unitprice,n)<<endl;

}

int main(){
    solve();
    return 0;
}
