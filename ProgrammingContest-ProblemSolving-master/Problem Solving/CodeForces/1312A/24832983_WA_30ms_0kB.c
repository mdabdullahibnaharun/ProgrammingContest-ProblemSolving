#include<stdio.h>
int main()
{
    int n,m,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        if(n%m==0){
            printf("YES\n");
        }else{
            printf("N0\n");
        }
    }
return 0;
}
