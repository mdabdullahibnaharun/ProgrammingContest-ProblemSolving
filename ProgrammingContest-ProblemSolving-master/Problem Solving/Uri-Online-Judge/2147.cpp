#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
    string str;
    getline(cin,str);
    int l = str.length();
    float k = (float)l/100;
    printf("%.2f\n",k);
    }
    return 0;
}
