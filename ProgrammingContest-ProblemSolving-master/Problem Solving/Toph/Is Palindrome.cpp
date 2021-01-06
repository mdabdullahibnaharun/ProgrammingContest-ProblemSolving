#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

int  main(){
    char str1[MAX] ;
    scanf("%[^\n]s",str1);
    int i =0 , h = strlen(str1)-1;
    while(h>i){
        if(str1[i++] != str1[h--]){
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    return 0;
}
