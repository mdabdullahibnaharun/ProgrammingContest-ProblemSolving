#include<bits/stdc++.h>


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

int coin[12]={1,2,4,10,20,40,100,200,400,1000,2000};
ll cng[6005];

void solve(){

	double n;
	cng[0]=1;
	for(int i=0;i<11;i++){
        int k =coin[i];
		for(int j=k;j<=6000;j++){ 
			cng[j]+=cng[j-coin[i]];
		}
	} 

	while(cin>>n){
		if(n==0) {
            break;
        }
		int m=int(n*20);
		printf("%6.2lf%17lld\n",n,cng[m]);
	}
}

int main(){
    solve();
    return 0;
}
