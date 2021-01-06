#include<stdio.h>
int main()
{
    int row;
    printf("enter rows number: ");
    scanf("%d",&row);

    int star,space,i,j;
    star=1;
    space=row-1;

    for(i=1;i<row*2;i++)
    {
        for(j=1;j<=space;j++)
            printf(" ");

        for(j=1;j<star*2;j++)
            printf("*");

        putchar('\n');

        if(i<row)
        {
            space--;
            star++;
        }
        else
        {
            space++;
            star--;
        }
    }
    return 0;
}
