/*
#include<stdio.h>
#include<math.h>
int main()
{
    double sal,tax;
    scanf("%lf",&sal);

    if(sal>=0 && sal<=2000){
        printf("Isento\n");
    }

    else if(sal>=2000.01 && sal<=3000)
    {
        sal-=2000;
        tax=sal*.8;
        printf("R$ %.2lf\n",tax);
    }
    else if(sal>=3000.01 && sal<=4500)
    {
        sal-=3000;
        tax=sal*.18+18;
        printf("R$ %.2lf\n",tax);
    }
    else
    {
        sal-=4500.00;
        tax=sal*.28+350;
        printf("R$ %.2lf\n",tax);
    }
    return 0;
}

*/

#include <stdio.h>
int main()
{
   double a,b;
    scanf("%lf", &a);
    if(a>=0 && a<=2000)
        printf("Isento\n");
    else if(a>=2000.01 && a<=3000)
    {
        a-=2000;
        b= a*.08;
        printf("R$ %.2lf\n",b);
    }
    else if(a>=3000.01 && a<=4500)
    {
        a-=3000;
        b= a*.18+80;
        printf("R$ %.2lf\n",b);
    }
    else
    {
        a-=4500;
        b= a*.28+350;
        printf("R$ %.2lf\n",b);
    }
    return 0;
}
