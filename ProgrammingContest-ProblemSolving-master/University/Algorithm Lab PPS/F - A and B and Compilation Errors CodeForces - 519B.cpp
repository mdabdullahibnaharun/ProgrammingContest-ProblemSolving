
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
#define li   long int
#define lli  long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 10001;
const int MAXX = 100001;
const int MAXN = 1e5 + 3;
//JUDGE_ID: 304332WQ

void solve(){

    li n,k,l,m,i;
    li f,s;

     cin>>n;
        k=n;
        l=n-1;
        m=n-2;
        li a[k],b[l],c[m];
        for(i=0;i<k;i++){
            scanf("%ld",&a[i]);
        }
        for(i=0;i<l;i++){
            scanf("%ld",&b[i]);
        }
        for(i=0;i<m;i++){
            scanf("%ld",&c[i]);
        }

        sort(a,a+k);
        sort(b,b+l);
        sort(c,c+m);

        for(i=0;i<n;i++){
            if(a[i]!=b[i]){
                f=a[i];
                break;
            }
        }

        for(i=0;i<l;i++){
            if(b[i]!=c[i]){
                s=b[i];
                break;
            }
        }

        printf("%ld\n%ld\n",f,s);

}

int main(){
    solve();
    return 0;
}
