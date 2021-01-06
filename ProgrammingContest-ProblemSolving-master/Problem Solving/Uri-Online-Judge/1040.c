/*
#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,n,avg2,avg;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    avg=(n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);
    printf("Media: %.1f\n",avg);

    if(avg>=7.0)
        printf("Aluno aprovado.\n");
  //  else if(avg<5.0)
       // printf("Aluno reprovado.\n");
    else if(avg>5.0 && avg<6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&n);
        printf("Nota do exame: %.1f\n",n);
        avg2=(avg+n)/2;
        if (avg2>=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",avg2);
        }
        else
            printf("Aluno reprovado.\n");

    }
    else
    {
        printf("Aluno reprovado.\n");
    }

}
*/

#include <stdio.h>
int main()
{
    double a, b, c, d, last, m;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    m = (a * 2 + b * 3 + c * 4 + d) / 10;
    printf("Media: %.1f\n", m);
    if (m >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (m >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &last);
        printf("Nota do exame: %.1f\n", last);
        if (last + m / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (last + m ) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}
