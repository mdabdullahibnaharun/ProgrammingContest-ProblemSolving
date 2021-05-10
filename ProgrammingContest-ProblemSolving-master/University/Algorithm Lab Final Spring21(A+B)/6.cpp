
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

//JUDGE_ID: 304332WQ
lli weight[MAX];
lli profit[MAX];
lli K[MAX][50001];

lli maximum(lli a , lli b){
    return (a>b)?a:b;
}

lli dpknapSack(lli W, lli n)
{
    lli i, w;

    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
            {
                K[i][w] = 0;
            }
            else if (weight[i - 1] <= w)
            {
                K[i][w] = maximum(profit[i - 1] + K[i - 1][w - weight[i - 1]],K[i - 1][w]);
            }
            else
            {
                K[i][w] = K[i - 1][w];
            }
        }
    }
    return K[n][W];
}

int main()
{
    lli n, k,i;

    cin>>n>>k;

    for(i=0; i<n; i++)
    {
        cin>>weight[i];
        cin>>profit[i];
    }

    printf("%lld\n", dpknapSack(k, n));

    return 0;
}











/*
int maximum(int a , int b){
    return (a>b)?a:b;
}

int dpknapSack(int W, int weight[], int profit[], int n)
{
    if (n== 0 || W == 0)
    {
        return 0;
    }
    if ( weight[n - 1] > W)
    {
        return dpknapSack(W, weight, profit, n - 1);
    }
    else
    {
        return maximum(profit[n - 1]+ dpknapSack(W - weight[n - 1],weight, profit, n - 1),dpknapSack(W, weight, profit, n - 1));
    }

}
void solve()
{
    int i;
    int n,w;
    scanf("%d %d",&n,&w);

    int unitprice[MAXX];
    int weight[MAXX];

    for(i=0; i<n; i++)
    {
        cin>>weight[i];
        cin>>unitprice[i];
    }
    cout<<knapSack(w, weight,unitprice,n)<<endl;
}

int main()
{
    solve();
    return 0;
}
*/
/*

int knapSack(vector <int>v,vector <int>w, int M)
{
    int i=1,total=0;
    vector <int> p;
    for(i=0; i<v.size(); i++)
    {
        p.push_back(v.at(i)/w.at(i));
    }

    sort(all(p));
    reverse(all(p));

    while(i<=v.size())
    {
        if(w.at(i)<=M)
        {
            M -= w.at(i);
            total += v.at(i);
        }
        if(w.at(i)>M){
            i++;
        }
    }
    return total;

}

void solve()
{
    int i;
    int n,W;
    scanf("%d %d",&n,&W);

    vector<int> weights;
    vector<int> profitues;

    for(i=0; i<n; i++)
    {
        int w,p;
        scanf("%d",&w);
        scanf("%d",&p);
        weights.push_back(w);
        profitues.push_back(p);
    }
    printf("%d\n",knapSack(weights,profitues,W));
}

int main()
{
    solve();
    return 0;
}

*/
/*
 int n, k, w, p, i,total = 0, cnt = 0;
    cin >> n >> k;
    vector<pair <ll,ll>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> w >> p;
        v.push_back( make_pair(w,p));
    }
    sort(all(v));
    reverse(all(v));
    for (i=0;i<n;i++)
    {
        total += v[i].first;
        cnt += v[i].second;
        if (total >= k)
        {
            break;
        }
    }
    cout << cnt << endl;
*/
