#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main(){
    int i,n;
    lli a,b;
    string str1,str2,str3,str4;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str1>>str2>>str3>>str4;
        cin>>a>>b;
        a += b;
        if(str2[0]=='I'){
            if(a%2==0)
                cout<<str3<<endl;
            else
                cout<<str1<<endl;
        }
        else{
            if(a%2==0)
                cout<<str1<<endl;
            else
                cout<<str3<<endl;
        }
    }
    return 0;
}
