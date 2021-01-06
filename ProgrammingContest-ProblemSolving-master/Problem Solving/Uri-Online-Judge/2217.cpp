/*
#include<bits/stdc++.h>
using namespace std;
int pow (int dig)
{
    int i=1,res=9;
    if(i==dig)
        return res;
    i++;
    return (res*res);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c;
        cin>>c;
        int k = pow(c);
        cout<< k%10 <<endl;
    }
    return 0;
}
/**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"9\n";
        }
    }
    return 0;
}

