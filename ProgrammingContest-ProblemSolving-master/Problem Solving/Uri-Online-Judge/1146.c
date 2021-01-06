#include<stdio.h>
int main()
{
    int i=0,X=0;
    while(1){
        scanf("%d",&X);
        if(X==0){
            break;
        }
        else{
            for(i=1; i<X; i++){
                printf("%d ",i);
                }
            }
            printf("%d\n",X);
            i=0;
            X=0;
        }
    return 0;
}

