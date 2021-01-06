#include<stdio.h>
int main()
{
    int j,n,k;
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        int i,a[100],sum=0,avg=0;
        for(i=0; i<=a[0]; i++){
            scanf("%d",&a[i]);
        }
        for(i=1;i<=a[0];i++){
            sum+=a[i];
        }
        avg=sum/a[0];
        printf("Case %d: %d\n",j,avg);
    }

return 0;
}
