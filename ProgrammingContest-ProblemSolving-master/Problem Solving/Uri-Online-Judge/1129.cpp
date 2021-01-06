#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,n,t;
    while(scanf("%d",&n)&&n!=0)
    {
        while(n--)
        {
            t=0;
            cin>>a>>b>>c>>d>>e;
            if(a<=127)
            {
                t++;
                a=1;
            }
            else a = 0;

            if(b<=127)
            {
                t++;
                b=1;
            }
            else b= 0;

            if(c<=127)
            {
                t++;
                c=1;
            }
            else c = 0;

            if(d<=127)
            {
                t++;
                d=1;
            }
            else d = 0;

            if(e<=127)
            {
                t++;
                e=1;
            }
            else e = 0;

            if(t==1){
                if(a==1)cout<<"A\n";
                if(b==1)cout<<"B\n";
                if(c==1)cout<<"C\n";
                if(d==1)cout<<"D\n";
                if(e==1)cout<<"E\n";
            }
            else{
                cout<<"*\n";
            }
        }
    }
    return 0;
}
