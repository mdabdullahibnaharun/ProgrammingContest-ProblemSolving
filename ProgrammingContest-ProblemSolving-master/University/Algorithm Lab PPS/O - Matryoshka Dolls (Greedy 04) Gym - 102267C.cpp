#include<cstdio>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int S,X,cnt=0;
    cin>>S>>X;
    while(S){
        S=S/X;
        cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
