#include<stdio.h>
int main()
{
    int n;
    int i;
    while(scanf("%d",&n)!=EOF){
        int q=0,p[n];
        for(i=0; i<n; i++){
            scanf("%d",&p[i]);
        }
        q=p[n-1]+p[n-1-1];

        if(q<10)
            printf("1\n");
        else if(q>=10 && q<20)
            printf("2\n");
        else if(q>=20)
            printf("3\n");
    }
    return 0;
}
