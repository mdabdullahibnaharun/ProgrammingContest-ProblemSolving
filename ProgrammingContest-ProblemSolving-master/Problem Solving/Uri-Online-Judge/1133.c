#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    if(X>=0 && Y>=0){

    if(X<Y){
        for(X=X+1;X<Y;X++){
                if(X%5==2 || X%5==3)
                printf("%d\n",X);
        }
    }
    else if(X>Y){
        for(Y=Y+1;Y<X;Y++){
                if(Y%5==2 || Y%5==3)
                printf("%d\n",Y);
        }
    }
    }

    return 0;
}
