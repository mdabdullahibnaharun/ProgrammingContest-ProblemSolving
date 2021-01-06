#include<stdio.h>
int main()
{
    int i,n,p=0,q=0;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        scanf("%d %d",&p,&q);
        printf("%d\n",p+q);
        p=0;q=0;
    }
return 0;
}
