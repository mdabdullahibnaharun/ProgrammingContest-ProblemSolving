#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<iterator>
#include<cstdio>
#include<vector>

using namespace std;

int main(){
    int i,m;

    cin>>m;

    vector <int> v;

    for(i=0;i<m;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    cout<<v[0]<<" ";
    for(i=1;i<m-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<v[i]<<endl;

    return 0;
}
