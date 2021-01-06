#include<stdio.h>
int main()
{
    int T,A,B,sum=0;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%d %d",&A,&B);
        sum=A+B;
        printf("%d\n",sum);
    }
    return 0;
}
