#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,max;
    cin>>a>>b>>c;

    int d=a+b*c;
    int e=a*(b+c);
    int f=a*b*c;
    int g=(a+b)*c;

    if(d>e && d>f && d>g) {
        max=d;
    }
    else if(e>d && e>f && e>g) {
        max=e;
    }
    else if(f>e && f>d && f>g) {
        max=f;
    }
    else {
        max=g;
    }
    printf("%d\n",max);
    return 0;
}
