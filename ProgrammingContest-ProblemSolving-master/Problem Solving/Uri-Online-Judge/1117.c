#include<stdio.h>
int main()
{
    float a,temp_a=0,count=0;
    while(1)
    {
        scanf("%f",&a);
        if(a<0.0)
        {
            printf("nota invalida\n");
        }
        else if(a>=0.0 && a<=10.0)
        {
            temp_a+=a;
            count+=1;
            if(count==2){
                break;
            }
        }
        else if(a!=0.0 && a!=10.0)
        {
            printf("nota invalida\n");
        }

    }
    printf("media = %.2f\n",temp_a/2.00);
    return 0;
}
