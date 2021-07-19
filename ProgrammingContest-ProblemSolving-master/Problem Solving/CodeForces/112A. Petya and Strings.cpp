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

void solve(){

    string a,b;
    cin>>a>>b;

    int i;

    for(i=0;i<a.size();i++){
        a[i]= tolower(a[i]);
        b[i]= tolower(b[i]);
    }

    if(a==b){
        printf("0\n");
    }

    else{
        for(i=0;i<a.size();i++){
            if(a[i]<b[i]){
                printf("-1\n");
                break;
            }
            if(a[i]>b[i]){
                printf("1\n");
                break;
            }
        }
    }


}

int main(){
    solve();
    return 0;
}
