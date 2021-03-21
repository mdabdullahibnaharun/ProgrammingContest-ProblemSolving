#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,i,j=1;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        printf("Case %d:",j++);
        for(i=1;i<=m;i++){
            if(m%i==0){
                printf(" %d",i);
            }
        }
        printf("\n");
    }
}
