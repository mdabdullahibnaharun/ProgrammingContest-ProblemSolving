#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    if(n==0)
        return n;
    return ((n%10) + sumOfDigits(n/10));
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",sumOfDigits(n));
    return 0;
}
