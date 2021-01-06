#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int cy(int a)
{
    int i =0;
    while(1) {
        i++;
        if(a==1)break;
        if(a%2!=0) {
            a = (3*a)+1;
        }
        else {
            a = a/2;
        }
    }
    return i;
}
int main()
{
    int a,b,c,temp,i;
    while(scanf("%d %d",&a,&b)==2) {
        int max = 0;
        printf("%d %d ",a,b);
        if(a>b) {
            temp = a;
            a = b;
            b = temp;
        }
        for(i=a; i<=b; i++) {
            c = cy(i);
            if(c>=max)
                max = c;
        }
        printf("%d\n",max);
    }
    return 0;
}
