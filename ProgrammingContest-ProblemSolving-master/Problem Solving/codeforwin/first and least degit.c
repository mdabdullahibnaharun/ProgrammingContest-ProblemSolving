#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n,f,l,last,first;
    scanf("%d",&n);
    last=n%10;
    first=n;
    while(first>=10)
    {
        first=first/10;
    }
    printf("last %d\n",last);
    printf("first %d\n",first);
    return 0;
}
