#include<stdio.h>

int main()
{
    unsigned long int a,b;
    while((scanf("%lu %lu",&a,&b))!=EOF)
    {
        if(a>b)
                printf("%lu\n",(a-b));
        else
                printf("%lu\n",(b-a));

    }
    return 0;
}
