#include<stdio.h>
int main()
{
    int row;
    printf("Enter pyramid rows: ");
    scanf("%d",&row);

    int i,j;
    for(i=0;i<=row;i++)
    {
        for(j=i;j<row;j++)
            printf(" ");

        for(j=1;j<=(2*i-1);j++)
            printf("*");

        putchar('\n');
    }
    return 0;
}
