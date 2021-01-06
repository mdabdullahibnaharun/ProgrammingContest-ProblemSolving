#include<stdio.h>
int main()
{
    int x[5],z=0,j,i=0;
    for(i=0;i<5;i++){
        scanf("%d",&x[i]);
    }
    for(i=1;i<4;i++){
        z=x[0]+x[i];
        for(j=1;i<4;i++){
            if(j==i)j++;
            if(z>x[j])
                printf("S\n");
            else
                printf("N\n");
        }
    }
    return 0;
}
