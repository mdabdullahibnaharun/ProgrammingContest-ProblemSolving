#include<stdio.h>
int main()
{
    int i,N[20];
    for(i=19;i>=0;i--){
        scanf("%d",&N[i]);
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}


/*
#include<stdio.h>
int main()
{
    int temp,j,i,n[20],p[20];
    for(i=0;i<20;i++){
        scanf("%d",&n[i]);
    }
    for(i=0,j=20;i<20;i++,j--){
        temp=n[i];
        p[i]=n[j];
        n[j]=temp;
    }

    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }include

    return 0;
}
*/
