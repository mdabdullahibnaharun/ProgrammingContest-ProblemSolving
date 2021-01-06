#include<stdio.h>
int main()
{
    int X , Y;
    float price;
    scanf("%d %d",&X ,&Y);
    if(X==1){
        price= 4.0*Y;
       // printf("Total: R$  %.2f\n",price);
    }
     else if(X==2){
        price= 4.50*Y;
       // printf("Total: R$  %.2f\n",price);
    }
    else if(X==3){
        price= 5.0*Y;
       // printf("Total: R$  %.2f\n",price);
    }
    else if(X==4){
        price= 2.0*Y;
       // printf("Total: R$  %.2f\n",price);
    }
    else if(X==5){
        price= 1.50*Y;
        //printf("Total: R$  %.2f\n",price);
    }
    printf("Total: R$ %.2f\n",price);
    return 0;
}
