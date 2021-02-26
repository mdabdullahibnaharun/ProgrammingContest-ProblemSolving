#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>
#include <cstdio>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int n,i;
    while(1)
    {
        cin>>n;
        if(n==0)break;

        vector <int> age;

        for(i=0;i<n;i++){
            int ag;
            cin>>ag;
            age.push_back(ag);
        }

        sort(age.begin(),age.end());

        cout<<age[0]<<" ";
        for(i=1;i<n-1;i++){
            cout<<age[i]<<" ";
        }
        cout<<age[i]<<endl;

    }

    return 0;
}
