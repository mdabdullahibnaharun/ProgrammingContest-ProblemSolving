#include<stdio.h>
int main()
{
    double X, temp, N[100];
    int i,c=0;
    scanf("%lf",&X);
    N[0]=X;
    temp=N[0];
    for(i=1;i<100;i++){
        N[i]=temp/2;
        temp=N[i];
    }
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,N[i]);
    }
    return 0;

}
