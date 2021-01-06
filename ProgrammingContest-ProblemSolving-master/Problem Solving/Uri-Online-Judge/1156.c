#include<stdio.h>
int main()
{
    double i,j,c,s=0;
    for(i=1,j=1;i<=39;i+=2,j*=2){
        c=i/j;
        s+=c;
    }
    printf("%.2lf\n",s);
    return 0;
}
