#include<cstdio>
#include<string>
#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

void output(int n){
    if(n%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
}

int main(){
    char str[10005];
    scanf("%s",str);
    int cnt=1,i,l = strlen(str);
    sort(str,str+l);
    for(i=0;i<l-1;i++){
        if(str[i]!=str[i+1]){
            cnt++;
        }
    }
    output(cnt);
    return 0;
}
