#include<bits/stdc++.h>
using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define lli   long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 100005;


void solve(){
    int arr[MAX];
    int i,tc,flag=FALSE;

    scanf("%d",&tc);

    for(i=0;i<tc;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1)flag=TRUE;
    }

    if(flag)
        printf("HARD\n");
    else
        printf("EASY\n");


}

int main(){
    solve();
    return 0;
}

