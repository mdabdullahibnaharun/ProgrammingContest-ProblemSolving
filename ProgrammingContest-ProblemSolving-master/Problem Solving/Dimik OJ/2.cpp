#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sz = s.length();
        int l = ((int)s[sz-1]-48);
        if(l%2!=0)
            cout<<"odd"<<endl;
        else
            cout<<"even"<<endl;
    }
    return 0;
}
