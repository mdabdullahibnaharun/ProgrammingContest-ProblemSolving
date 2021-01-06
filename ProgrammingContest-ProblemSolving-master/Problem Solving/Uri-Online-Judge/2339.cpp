#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long int a,b,c;
    cin>>a>>b>>c;
    if(a*c<=b)
        cout<<"S\n";
    else
        cout<<"N\n";
    return 0;
}
