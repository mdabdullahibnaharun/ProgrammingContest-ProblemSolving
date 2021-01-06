#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float f ;
        int d = 0 ;
        cin>>f;
        while(f>1){
            f/=2;
            d++;
        }
        cout<<d<<" dias\n";
    }
    return 0;
}
