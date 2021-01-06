#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int l=str.length();
    if(l<=140)
        cout<<"TWEET"<<endl;
    else if(l>140)
        cout<<"MUTE"<<endl;
    return 0;
}
