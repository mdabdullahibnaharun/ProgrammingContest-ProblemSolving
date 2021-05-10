#include<bits/stdc++.h>
using namespace std;

int gcd(int m, int n){

    if(n==0)
        return m;
    return gcd(n,m%n);
}

void solve(){

    int a,b,res;
    scanf("%d %d",&a,&b);
    res = gcd(a,b);
    printf("%d\n",res);

}

int main(){
    solve();
    return 0;
}
