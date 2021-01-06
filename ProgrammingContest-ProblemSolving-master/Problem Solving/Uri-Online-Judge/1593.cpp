#include<bits/stdc++.h>
#define maxm 100000
using namespace std;
int main(){
    string dec;
    long int i,j,t,a[maxm];
    cin>>t;
    while(t--){
            int res = 0;
        getline(cin,dec);
        for(i=0;dec>0;i++){
            a[i]=(int)dec%2;
            (int)dec=(int)dec/2;
        }
        for(j=i-1;j>=0;j--){
            res + = a[i];
        }
        cout<<res<<endl;
    }
    return 0;
}
