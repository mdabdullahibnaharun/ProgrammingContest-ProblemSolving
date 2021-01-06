#include<stdio.h>
int main()
{
    int i,c[4];
    for(i=0; i<4;i++){
        scanf("%d",&c[i]);
    }
    int ct=0;
    for(i=0; i<4; i++){
        if(c[i]==1){
            ct+=i+1;
            break;
        }
    }
    printf("%d\n",ct);
return 0;
}
