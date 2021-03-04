#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>
#include <stdbool.h>
#include <cstdio>
#include <vector>
#include <set>

using namespace std;

#define MAX 10005

int main(){
    int n,x=0,ary[MAX];
    while(cin>>n){
        ary[x]=n , x++;
        sort(ary,ary+x);
        if(x%2!=0){
            cout<<ary[x/2]<<endl;
        }
        else{
            cout<<(ary[x/2-1]+ary[x/2])/2<<endl;
        }
    }
    return 0;
}
