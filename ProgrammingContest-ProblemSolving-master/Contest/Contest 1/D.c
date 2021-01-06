#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int c;
        scanf("%d",&c);
        if(c==1)
        {
            printf("HARD\n");
            exit(0);
        }
    }
    printf("EASY\n");
    return 0;
}
