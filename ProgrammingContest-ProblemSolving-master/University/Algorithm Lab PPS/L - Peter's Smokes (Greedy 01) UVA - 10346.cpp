#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;
#define endl '\n'


int main(){
    int n,k;
    while(cin>>n>>k){
        cout<<n+(n-1)/(k-1)<<endl;
    }
    return 0;
}
