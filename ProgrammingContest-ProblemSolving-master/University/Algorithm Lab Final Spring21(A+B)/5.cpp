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

int cmp(int a,int b)
{
    return a>b;
}

void solve(){
    int i,M,N;
    cin>>M>>N;

    int coin[M];
    for(i = 0 ; i<M ; i++)
    {
        scanf("%d",&coin[i]);
    }

    sort(coin,coin+M,cmp);

    int no_of_coins =0;

    for(i = 0 ; i<M ; i++)
    {
        if(coin[i]<=N)
        {
            no_of_coins += N/coin[i];
            N = N%coin[i];
        }
    }

    printf("%d\n",no_of_coins);
}

int main(){
    solve();
    return 0;
}
