#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,i,count=0,sum=0;
    scanf("%d",&x);

    do{
        scanf("%d",&y);
    }while(x>=y);

    for(i=x;sum<y;i++){
        sum+=i;
        count++;
    }
    printf("%d\n",count);
    return 0;
}
