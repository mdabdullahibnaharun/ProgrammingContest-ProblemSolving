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
    int tc;
    cin>>tc;
    cin.ignore();

    map <string,string> slogan;

    while(tc--)
    {
        string f,s;
        getline(cin,f);
        getline(cin,s);
        slogan.insert(make_pair(f,s));
    }

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string p;
        getline(cin,p);
        cout<<slogan[p]<<endl;
    }

    return 0;
}
