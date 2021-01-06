#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x=0,y=0;
    scanf("%d",&t)
        while(t--){
        int n,c;
        cin>>n>>c;
        x = x+(n*c);
        y = y+c;
    }
    y=y*100;
    double p = (double)x/y;
    printf("%.4lf\n",p);
    return 0;
}
