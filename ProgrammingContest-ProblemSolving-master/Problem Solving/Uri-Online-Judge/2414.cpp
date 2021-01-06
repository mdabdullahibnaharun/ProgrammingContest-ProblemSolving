#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    int n,max=-1;
    while(scanf("%d",&n)){
        if(n==0)
            break;
        if(n>max)
            max=n;
    }
    cout<<max<<endl;
    return 0;
}
