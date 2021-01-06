#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        long int n,r;
        scanf("%d",&n);

        long int temp=1;
        while(n--)
            temp*=7;

        r=temp%10;
        printf("%ld\n",r);
    }
    return 0;
}
