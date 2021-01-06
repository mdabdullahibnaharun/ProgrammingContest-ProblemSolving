#include<stdio.h>
int main()
{
    int i=0, X,Y,odd=0;
    scanf("%d %d",&X ,&Y);
    for(i=Y+1;i<X;i++){
        if(i%2!=0){
            odd+=i;
        }
    }
    printf("%d\n",odd);
    return 0;
}
