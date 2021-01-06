#include<stdio.h>
int main()
{
    float a,b,c,sum;
    int i,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%f %f %f",&a ,&b ,&c);
       // sum=((a*2.0)+(b*3.0)+(c*5.0));
        sum=((a/5.0)+((b*3.0)/10.0)+(c/2.0));
        printf("%.1f",sum);
    }
    return 0;
}
