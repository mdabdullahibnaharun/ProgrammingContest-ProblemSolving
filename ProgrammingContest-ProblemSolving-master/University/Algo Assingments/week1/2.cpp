#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n<=1)
        return n;
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%d ",fibo(i));
    printf("\n");
    return 0;
}
