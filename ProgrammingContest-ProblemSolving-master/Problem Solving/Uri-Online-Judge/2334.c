#include<stdio.h>
int main()
{
    unsigned long long int n;
    while(1){
        scanf("%llu",&n);
        if(n==-1)break;
        else if(n==0){
            printf("%llu\n",n);
        }else{
            printf("%llu\n",n-1);
        }
    }
return 0;
}
