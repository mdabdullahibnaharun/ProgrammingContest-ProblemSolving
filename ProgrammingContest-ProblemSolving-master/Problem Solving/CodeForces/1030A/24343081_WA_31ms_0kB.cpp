#include<stdio.h>
int main()
{
    int b,n;
    scanf("%d",&b);
    for(int i=0; i<b; i++)
        scanf("%d",&n);
    if(n==1||n==0)
    {
        if(n==1)
        {
            printf("HARD\n");
        }
        else
        {
            printf("EASY\n");
        }
    }
    return 0;
}
