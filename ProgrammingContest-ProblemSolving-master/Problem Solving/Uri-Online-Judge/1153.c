#include<stdio.h>
int main()
{
    int fact=1,N;
    scanf("%d",&N);
    for(N;N>=1;N--){
        fact=fact*N;
    }
    printf("%d\n",fact);
    return 0;
}
