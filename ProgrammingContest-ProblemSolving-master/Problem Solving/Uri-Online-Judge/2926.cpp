#include<bits/stdc++.h>
using namespace std;
const string cri = "Entao eh Natal!";
int main(){
    int t;
    cin>>t;
    for(int i = 0; i<cri.size();i++){
        char ch = cri[i];
        if(ch=='a'){
            for(int j = 0; j<t;j++)
                cout<<"a";
        }
        else{
            cout<<ch;
        }
    }
    cout<<endl;
    return 0;
}
