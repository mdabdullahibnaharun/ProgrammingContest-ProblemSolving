#include<bits/stdc++.h>
using namespace std;
#define max 100
int main()
{
    int a[max];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    cout<<a[1]<<"\n";
    return 0;
}
