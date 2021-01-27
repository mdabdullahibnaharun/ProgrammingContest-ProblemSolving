#include<stdio.h>
int main()
{
    int n,m,t;
    int tag;
    scanf("%d",&t);
    while(t--){
            tag=0;
        scanf("%d %d",&n,&m);
        if(n%m==0){
            printf("YES\n");
        }else{
            printf("N0\n");
        }
    }
return 0;
}
