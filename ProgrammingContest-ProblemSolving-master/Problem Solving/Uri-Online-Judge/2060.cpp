#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t=0,th=0,f=0,fi=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
        if(j%2==0)t++;
        if(j%3==0)th++;
        if(j%4==0)f++;
        if(j%5==0)fi++;
    }
    cout<<t<<" Multiplo(s) de 2\n";
    cout<<th<<" Multiplo(s) de 3\n";
    cout<<f<<" Multiplo(s) de 4\n";
    cout<<fi<<" Multiplo(s) de 5\n";
    return 0;
}
