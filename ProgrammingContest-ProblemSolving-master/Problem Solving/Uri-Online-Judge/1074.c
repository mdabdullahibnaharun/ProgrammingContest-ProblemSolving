#include<stdio.h>
int main()
{

    int i,N,a;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d",&a);
        if(a%2==0){
            if(a>0){
                printf("EVEN POSITIVE\n");
            }
            else if(a<0){
                printf("EVEN NEGATIVE\n");
            }
            else{
                printf("NULL\n");
            }
        }
         if(a%2!=0){
            if(a>0){
                printf("ODD POSITIVE\n");
            }
            else if(a<0){
                printf("ODD NEGATIVE\n");
            }
            else{
                printf("NULL\n");
            }
         }

    }

    return 0;
}
