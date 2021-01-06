#include<bits/stdc++.h>
using namespace std;
int main(){
    string num;
    cin>>num;
    int j = 0;
    for(int i = 0 ; i < num.size() ; i++){
        cout<<num[i];
        j++;
        if(j%2!=1){
            cout<<",";
            if(j==3)
                j=0;
        }
    }
}
