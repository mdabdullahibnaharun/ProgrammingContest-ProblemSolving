#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l = ((int)s[4]-48) + ((int)s[0]-48);
        cout<<"Sum = "<<l<<endl;
    }
    return 0;
}
