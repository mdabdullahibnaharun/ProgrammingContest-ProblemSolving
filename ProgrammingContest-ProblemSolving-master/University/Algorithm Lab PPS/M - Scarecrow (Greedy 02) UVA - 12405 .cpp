#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

#define MAX 10005

int main()
{
    int i, tc,ans;
    scanf("%d",&tc);
    for(i = 1 ; i<=tc ; i++)
    {
        int n,j;
        ans=0;
        scanf("%d",&n);
        char str[n];
        scanf("%s",&str);
        for(j=0; j<n;)
        {
            if(str[j]=='.'){
                ans++;
                j+=3;
            }
            else{
                j++;
            }
        }
        printf("Case %d: %d\n",i,ans);
        ans=0;
    }
    return 0;
}
