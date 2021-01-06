#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c[n];
    string str[n];
    int i,p=0,m=0;
    for(i=0; i<n; i++)
    {
        cin>>c[i];
        cin>>str[i];
        if(c[i]=='+')
            p++;

        if(c[i]=='-')
            m++;
    }
    sort(str,str+n);
    for(i=0; i<n; i++)
    {
        cout<<str[i]<<endl;
    }

    printf("Se comportaram: %d | Nao se comportaram: %d\n",p,m);
    return 0;
}
