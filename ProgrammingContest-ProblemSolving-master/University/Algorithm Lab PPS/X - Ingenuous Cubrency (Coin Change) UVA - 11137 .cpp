#include<bits/stdc++.h>

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
const int MAXX = 10005;
const int MAXN = 1e5 + 3;

//JUDGE_ID: 304332WQ

int coin[22];
ull cngway[MAXX];

void solve(){

    int i,j,n,k;

    for(i=1;i<=21;i++){
        coin[i]=i*i*i;
    }

    cngway[0]=1;

    for(i=1;i<=21;i++){
        k= coin[i];
        for(j = k ; j<=MAXX ; j++ ){
            cngway[j] += cngway[j-k];
        }
    }

    while(cin>>n){
        cout<<cngway[n]<<endl;
    }
}

int main(){
    solve();
    return 0;
}
