#include<iostream>
#include<string>
#include<cstdio>

using namespace std;;
#define endl '\n'

int main(){
    int n,j=2;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0 ; i<n ;){
        cout<<s[i];
        i=i+j;
        j++;
    }
    cout<<endl;
    return 0;
}
