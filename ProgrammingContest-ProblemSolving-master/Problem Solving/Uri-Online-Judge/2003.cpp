#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  //  ios_base::sync_with_stdio(false);
  //  cin.tie(NULL);

    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
        scanf(":%d",&b);
        if(a==7){
            cout<<"Atraso maximo: "<<b<<"\n";
        }
        else if(a==8){
            cout<<"Atraso maximo: "<<b+60<<"\n";
        }
        else if(a==9){
            cout<<"Atraso maximo: "<<120<<"\n";
        }
        else{
            cout<<"Atraso maximo: "<<0<<"\n";
        }
    }
    return 0;
}
