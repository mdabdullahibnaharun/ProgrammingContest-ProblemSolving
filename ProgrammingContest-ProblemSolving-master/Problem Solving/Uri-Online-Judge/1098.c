#include<stdio.h>
int main()
{
    float i=0,j=1;
    while(i<=2.1) {
        printf("I=%.1f J=%.1f\n",i,j+i);
        printf("I=%.1f J=%.1f\n",i,j+1+i);
        printf("I=%.1f J=%.1f\n",i,j+2+i);
        i+= 0.2;
    }
    return 0;
}
