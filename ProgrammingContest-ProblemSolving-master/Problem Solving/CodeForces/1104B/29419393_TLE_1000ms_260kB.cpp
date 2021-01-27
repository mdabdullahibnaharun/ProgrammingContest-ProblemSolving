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
const int MAX = 1000005;
 
 
void solve(){
    int len,i,j,b=0;
    string str;
    while(cin>>str){
        len=str.size();
        for(i=0;i<len-1;i++){
            if(str[i]==str[i+1]){
                str.erase(i,2);
                len=str.size();
                i=-1;
                ++b;
            }
        }
        if(b & 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
 
int main(){
    solve();
    return 0;
}