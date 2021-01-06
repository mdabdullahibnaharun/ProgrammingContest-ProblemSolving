#include<stdio.h>
int main()
{
    int a[6],i,sum=0;
    for(i=0;i<6;i++){
        scanf("%d",&a[i]);
        if(i==5)printf("\b\n");
        else printf(" \n");
        sum+=a[i];

    }
    printf("%d\n",sum/6);
return 0;
}
