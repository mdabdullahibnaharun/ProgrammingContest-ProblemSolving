#include <stdio.h>
int main()
{
    int a,X,c=0;
    for(a=1; a<=5; a++)
    {
        scanf("%d", &X);
        if(X%2==0)
            c++;
    }
    printf("%d valores pares\n",c);
    return 0;
}

