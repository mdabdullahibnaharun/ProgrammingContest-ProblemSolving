#include<stdio.h>
int main()
{
    int Alcohol=0, Gasoline=0, Diesel=0,n;
    while(1)
    {
        scanf("%d",&n);
        if(n==4)
        {
            break;
        }
        else
        {
            if(n==1)
                ++Alcohol;
            if(n==2)
                ++Gasoline;
            if(n==3)
                ++Diesel;
        }

    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",Alcohol);
    printf("Gasolina: %d\n",Gasoline);
    printf("Diesel: %d\n",Diesel);

    return 0;
}
