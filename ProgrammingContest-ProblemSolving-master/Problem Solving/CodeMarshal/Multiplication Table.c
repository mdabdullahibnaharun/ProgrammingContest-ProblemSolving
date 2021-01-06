#include<stdio.h>
int main(){
    int n,j,i,m;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        scanf("%d",&m);
        printf("Case %d:\n",j);
        for(i=1;i<=10;i++){
            printf("%d * %d = %d\n",m,i,m*i);
        }
    }
return 0;
}