#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    while(true){
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)
            break;
        int s = (int)cbrt(a*b*c);
        cout<<s<<endl;
    }
    return 0;
}
