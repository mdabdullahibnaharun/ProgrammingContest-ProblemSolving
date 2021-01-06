#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[1000];
    int t;
    cin>>t;
    for(int i = 0 ; i < t ; i++){
        cin>>a[i];
    }
    sort(a,a+t);
    cout<<a[t-1]<<endl;
    return 0;
}
