#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;

int main(){

    int tc,q;
    map <string,int> m;
    cin>>tc;
    while(tc--)
    {
        cin>>q;
        if(q==1){
            string x;
            int y=0;
            cin>>x>>y;
            m[x]+=y;
        }
        else if(q==2){
            string x;
            cin>>x;
            m.erase(x);
            m.insert(make_pair(x,0));
        }
        else if(q==3){
            string x;
            cin>>x;
            /*
            map <string,int> :: iterator it;
            it = m.find(x);
            if(it!=m.end()){
                cout<<m[x]<<endl;
            }else{
                cout<<0<<endl;
            }
            */
            cout<<m[x]<<endl;
        }

    }

    return 0;
}
