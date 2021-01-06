#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    double sum=0,a;
    cin>>t;
    for(int i = 1 ; i <= t ; i++){
        cin>>a;
        sum+=a;
        cout<<sum/i<<endl;
    }
    return 0;
}

