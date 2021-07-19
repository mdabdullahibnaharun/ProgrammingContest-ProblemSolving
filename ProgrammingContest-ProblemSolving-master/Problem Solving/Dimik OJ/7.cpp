#include<bits/stdc++.h>
using namespace std;

int getInr(string a){
    int i,num=1;
    int len = a.length();
    for(i=0;i<len;i++){
        if(a[i]==' ' && a[i+1]!=' '){
            num++;
        }
    }
    return num;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
    string in;
    getline(cin,in);
    cout<<getInr(in)<<endl;
    }
    return 0;
}
