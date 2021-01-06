#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b;
    if(a>b){
        c = a/b;
        d = a%b;
    }
    cout<<c<<" "<<d<<" "<<b<<endl;
    return 0;
}
