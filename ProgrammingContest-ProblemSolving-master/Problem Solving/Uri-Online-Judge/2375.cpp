#include<bits/stdc++.h>
using namespace std;
int main(){
    long int a,b,c,n;
    cin>>n;
    cin>>a>>b>>c;
    if(n<=a&&n<=b&&n<=c)
        cout<<"S\n";
    else
        cout<<"N\n";
    return 0;
}
