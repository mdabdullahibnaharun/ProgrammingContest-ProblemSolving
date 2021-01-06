#include<stdio.h>
int main(){

 float b;
 int i,count=0;
    for (i=1;i<=6;i++){
        scanf("%f",&b);
            if(b>0){
                count+=1;
                continue;
            }

        }
        printf("%d valores positivos\n",count);
    return 0;
}
