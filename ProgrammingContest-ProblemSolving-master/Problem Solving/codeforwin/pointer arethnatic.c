#include<stdio.h>
int main()
{
    float n,m;
    float *p,*q;
    p=&n;
    q=&m;
    printf("Enter two real number:");
    scanf("%f %f",p,q);

    float s,dif,mul,div;

    s=(*p)+(*q);
    dif=(*p)-(*q);
    mul=(*p) * (*q);
    div=(*p)/(*q);

    printf("sum=%.2f\n",s);
    printf("dif=%.2f\n",dif);
    printf("mul=%.2f\n",mul);
    printf("div=%.2f\n",div);

return 0;
}
