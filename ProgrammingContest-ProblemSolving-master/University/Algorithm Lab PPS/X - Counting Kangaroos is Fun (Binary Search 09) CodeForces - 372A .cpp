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



int main(){
    int n,i;
    cin>>n;
	int ary[n];

    for(i =0;i<n;i++)
        cin>>ary[i];

    sort(ary,ary+n);
    int s = n-1;
    for(i = n/2-1 ; i>=0 ; i--){
        if(ary[i]*2<=ary[s])s--;
    }

    cout<<++s<<endl;
return 0;
}

