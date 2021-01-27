#include <stdio.h>
#include <math.h>
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

