#include<bits/stdc++.h>
using namespace std;
int main()
{
	string n;
    int x=0,t;
    cin>>t;
    while(t--){
        cin>>n;
        if(n[1]=='+')x++;
        else x--;
    }
    printf("%d\n",x);
    return 0;
}
