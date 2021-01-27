#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    int res1=0,res2=0;
    cin>>a>>b>>c;

    res1=a-b-c;
    res2=a-b*c;

    if (res1< res2)
        printf("%d\n",res1);

    else
        printf("%d\n",res2);

    return 0;
}
