#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a,b,c,max;
        scanf("%d %d %d",&a,&b,&c);
        max=(a>b && a>c)?a:(b>a && b>c)?b:c;
        printf("Case %d: %d\n",i,max);
    }
return 0;
}
