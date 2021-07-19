#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

#define lli long long int

lli factorial(lli n){
    if(n==0){
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }
}

int  main(){
    int t;
    scanf("%d",&t);

    while(t--){

    lli num,fact;
    cin>>num;

    fact = factorial(num);

    cout<<fact<<endl;
    }

    return 0;
}
