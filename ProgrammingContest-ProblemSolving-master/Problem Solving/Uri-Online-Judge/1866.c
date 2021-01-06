#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,r;
        scanf("%d",&n);
        r=n%2;
        printf("%d\n",r);
    }
    return 0;
}
