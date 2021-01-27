#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,t;
    while(scanf("%d %d",&v,&t)!=EOF) {
        if(v && t)
            printf("%d\n",(2*v*t));
        else
            printf("%d\n",0);
    }
    return 0;
}
