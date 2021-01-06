#include<stdio.h>
int main()
{
    int row;
    printf("Enter value of rows: ");
    scanf("%d",&row);

    int i,j;
    for(i=0;i<=row;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");

        for(j=i;j<=row;j++)
            printf("*");

        printf("\n");
    }
    return 0;
}


