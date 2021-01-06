#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,c1=0,c2=0;
    int i,t;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a;
        if(a==0)c1++;
        if(a==1)c2++;
    }
    if(c1>c2)
        cout<<"Y\n";
    else
        cout<<"N\n";
    return 0;
}
