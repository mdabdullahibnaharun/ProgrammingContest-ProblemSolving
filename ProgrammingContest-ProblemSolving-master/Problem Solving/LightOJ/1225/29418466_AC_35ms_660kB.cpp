#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,i=1;
    string s,r;
    cin>>t;
    cin.ignore();
    while(i<=t){
        getline(cin,s);
        r=s;
        reverse(r.begin(),r.end());
        if(r==s){
            printf("Case %d: Yes\n",i);
        }
        else{
            printf("Case %d: No\n",i);
        }
        i++;
    }
    return 0;
}