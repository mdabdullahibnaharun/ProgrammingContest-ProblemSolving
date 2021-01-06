#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Ho");
        c++;
        if(c!=n){
            printf(" ");
        }else{
            printf("!\n");
        }
    }
return 0;
}
