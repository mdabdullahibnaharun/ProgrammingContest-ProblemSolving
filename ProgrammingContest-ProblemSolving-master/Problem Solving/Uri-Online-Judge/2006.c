#include<stdio.h>
int main()
{
    int t,i;
    int n[5];
    int s=0;
    scanf("%d",&t);
    for(i=0;i<5;i++){
        scanf("%d",&n[i]);
        if(n[i]==t)s++;
    }
    printf("%d\n",s);
    return 0;
}
