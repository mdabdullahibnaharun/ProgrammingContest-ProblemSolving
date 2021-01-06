#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, X,Y,count=0;
    scanf("%d %d",&X,&Y);

    if(X<Y){
        for(i=X;i<=Y;i++){
            if(i%13!=0){
                 //   continue;
                count=count+i;

            }
        }
    }
    else if(X>Y){
        for(i=Y;i<=X;i++){
            if(i%13!=0){
                  //   continue;
                count=count+i;

            }
        }
    }
    printf("%d\n",count);

    return 0;
}
