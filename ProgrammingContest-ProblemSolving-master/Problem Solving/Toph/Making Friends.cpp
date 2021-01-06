#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int i = 1 ;
    int num ,c = 0;
    cin>>num;
    for(i=1;i<=num;i++){
        if(num%i==0)
            ++c;
    }
    cout<<--c<<endl;
    return 0;
}

