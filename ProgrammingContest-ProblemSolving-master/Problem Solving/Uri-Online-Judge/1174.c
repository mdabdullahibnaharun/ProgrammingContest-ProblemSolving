#include<stdio.h>
int main()
{
    double A[5],n;
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%lf",&A[i]);
    }
    for(i=0; i<5; i++)
    {
        if(A[i]<=10.0)
            printf("A[%d] = %.1lf\n",i,A[i]);
    }
    return 0;
}
