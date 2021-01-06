/*
#include<stdio.h>

int main()
{
    long long int a,b;
    while((scanf("%lld %lld",&a,&b))!=EOF)
    {
        if(a>b){
            printf("%lld\n",(a-b));
        }
        else{
            printf("%lld\n",(b-a));
        }

    }
    return 0;
}

*/
#include <stdio.h>
int main()
{
    unsigned long int h,i;
    while((scanf("%lu %lu",&h,&i))==2)
    {
        if(h>i){
            printf("%lu\n",(h-i));
        }
        else {
            printf("%lu\n",(i-h));
        }
    }
    return 0;
}



/*
int main()
{
    unsigned long int a,b;
    while((scanf("%lu %lu",&a,&b))!=EOF)
    {
        if(a>b){
            printf("%lu\n",(a-b));
        }
        else{
            printf("%lu\n",(b-a));
        }

    }
    return 0;
}
*/
