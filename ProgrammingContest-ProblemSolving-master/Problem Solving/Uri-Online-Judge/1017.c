#include<stdio.h>

int main(){



    int time, value;

    float fuel;



     scanf("%d %d", &time, &value);

     fuel = ((time * value) / 12.0);

     printf("%.3f\n", fuel);

     return 0;



}


