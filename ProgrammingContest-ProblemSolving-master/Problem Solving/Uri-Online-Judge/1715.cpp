#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,res=0;
    while(scanf("%d %d",&a,&b)==2){
        for(int i =0 ; i<a ; i++)
        {
            d=0;
            for(int j =0 ; j<b ; j++)
            {
                cin>>c;
                if(c>0)
                    d++;
            }
            if(d==b)
                res++;
        }
        cout<<res<<endl;
    }
    return 0;
}
