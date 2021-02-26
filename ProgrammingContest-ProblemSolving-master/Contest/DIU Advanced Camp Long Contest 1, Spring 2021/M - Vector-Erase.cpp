#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>
#include <cstdio>
#include <vector>
#include <set>

using namespace std;


int main(){
    int n ,i;
    cin>>n;

    vector <int> v;

    for(i=0;i<n;i++){
        int value;
        cin>>value;
        v.push_back(value);
    }

    int x,a,b;

    cin>>x;
    cin>>a>>b;

    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));

    cout<<v.size()<<endl;

    cout<<v[0];
    for(int i = 1 ; i<v.size() ;i++){
        cout<<" "<<v[i];
    }
    printf("\n");

    return 0;
}
