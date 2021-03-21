#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,p;
    cin>>t;
    while(t--){
        cin>>p;
        for(i=1;i<=p;i++){
            for(j=1;j<=p;j++){
                printf("*");
            }
            printf("\n");
        }
        if(t>0)
        printf("\n");
    }
    return 0;
}
