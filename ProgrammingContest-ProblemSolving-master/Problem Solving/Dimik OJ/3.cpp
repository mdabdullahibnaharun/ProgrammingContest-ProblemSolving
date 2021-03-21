
#include<stdio.h>

int main(){
    int i,k=0;
    for(i=1000;i>0;i--){
        printf("%d\t",i);
        k++;
        if(k==5){
            printf("\n");
            k=0;
        }

    }
    return 0;
}
