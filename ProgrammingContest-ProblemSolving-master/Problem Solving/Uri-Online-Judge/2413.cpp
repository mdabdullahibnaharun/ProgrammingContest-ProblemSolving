#include<iostream>
#include<cmath>
using namespace std;
int res(int n){
    if(n==0)
        return 0;
    return n*2*2;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n)<<endl;
    return 0;
}
