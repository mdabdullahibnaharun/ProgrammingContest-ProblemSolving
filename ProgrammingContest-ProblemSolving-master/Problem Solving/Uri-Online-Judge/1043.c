#include<stdio.h>
int main ()
{
    float A,B,C, area,Perimetro;
    scanf("%f %f %f",&A, &B, &C);

    if(A<B+C && B<C+A && C<A+B)
    {
        Perimetro=A+B+C;
        printf("Perimetro = %.1f\n",Perimetro);
    }
    else
    {
        area = .5*((A+B)*C);
        printf("Area = %.1f\n",area);
    }
    return 0;
}
