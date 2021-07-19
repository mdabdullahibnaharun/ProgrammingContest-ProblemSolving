#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int t,j=1;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        for(int i = 0; i<3 ; i++)
        {
            int n;
            cin>>n;
            v.push_back(n);
        }

        sort(v.begin(),v.end());
        printf("Case %d: %d %d %d\n",j++,v[0],v[1],v[2]);
        v.clear();
    }

    return 0;


}
