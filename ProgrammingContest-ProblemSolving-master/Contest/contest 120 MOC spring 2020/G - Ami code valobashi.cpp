#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,b,c,avg;
    cin>>t;
    for(i=1;i<=t;i++) {
        cin>>a>>b>>c;
        if((b>a && b<c)||(b<a && b>c))
            avg=b;
        else if((c>a && c<b)||(c<a && c>b))
            avg=c;
        else
            avg=a;
        printf("Case %d: %d\n",i,avg);
    }
return 0;
}
