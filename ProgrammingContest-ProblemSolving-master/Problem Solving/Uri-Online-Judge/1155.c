#include<stdio.h>
int main()
{
    double i,c,s=0;
    for(i=1;i<=100;i++){
        c=1/i;
        s+=c;
    }
    printf("%.2lf\n",s);
    return 0;
}
