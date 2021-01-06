#include<stdio.h>
int main()
{
    long long int vice , versa , difference;
    while(scanf("%lld %lld",&vice,&versa)!=EOF){
        if(vice>=versa){
            difference = vice-versa;
        }else{
            difference = versa-vice ;
        }
        printf("%lld\n",difference);
    }
return 0;
}
