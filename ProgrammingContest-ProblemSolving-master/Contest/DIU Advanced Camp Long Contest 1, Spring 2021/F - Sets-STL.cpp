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
    int tc;
    cin>>tc;
    set <int> s;
    while(tc--)
    {
        int q = 0;
        cin>>q;
        if(q==1){
            int x;
            cin>>x;
            s.insert(x);
        }
        else if(q==2){
            int x;
            cin>>x;
            s.erase(x);
        }
        else if(q==3){
            int x;
            cin>>x;
            set <int> :: iterator st;
            st = s.find(x);
            if(st!=s.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
