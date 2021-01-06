#include<stdio.h>

int main()
{
    int M,N,count=0;
    while(1)
    {
        scanf("%d %d",&M,&N);
        if(M<=0||N<=0){
            break;
        }

       else{
            if(M>=N){
                for(N; N<=M; N++){
                    printf("%d ",N);
                    count=count+N;
            }
                printf("Sum=%d\n",count);
                count=0;
            }
            else if(M<=N){
                for(M;M<=N;M++){
                    printf("%d ",M);
                    count=count+M;
                }
                printf("Sum=%d\n",count);
                count=0;
          }
       }
    }
    return 0;
}

