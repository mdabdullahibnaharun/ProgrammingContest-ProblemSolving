#include<stdio.h>
#include<math.h>
int main ()
{
    int n, k, lost, percentage;

    scanf("%d", &n );
    scanf("%d", &k );

    lost=n-k;
    percentage =(lost*100)/n ;
    printf("%d\n", percentage);
    return 0;

}
