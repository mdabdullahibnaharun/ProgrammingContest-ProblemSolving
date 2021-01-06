#include<stdio.h>
#include<string.h>

int main()
{
    int size;
    scanf("%d",&size);

    int i, x = -1, s = 0;

    char c[101];
    int n=0;
    while(n<size)
    {
        scanf("%c",&c[n]);
        n++;
    }
    c[n]='\0';

    int len=0;
    while(c[len]!='\0')
        len++;

    if(len>=26)
    {
        printf("YES\n");
    }
    else if(len<26)
    {
        for(i=0; i<len; i++)
        {
            if(c[i]>='A' && c[i]<='Z')
                x++;
            else
                s++;
        }
    }
    else if(x>=0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
