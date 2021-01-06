#include <stdio.h>
#include <math.h>

int main() {

    int pn1, pn2, pq1, pq2;
    double pp1, pp2, totalPrice;

    scanf("%d %d %lf", &pn1, &pq1, &pp1);
    scanf("%d %d %lf", &pn2, &pq2, &pp2);

    totalPrice = (pq1*pp1) + (pq2*pp2);

    printf("VALOR A PAGAR: R$ %.2lf\n", totalPrice);

    return 0;
}
