#include<stdio.h>
int main()
{

    float a,age=0.0,count=0.0;

    while(1){
        scanf("%f",&a);
        if(a<0){
            break;
        }
        else{
            age+=a;
            count+=1.0;
        }
    }
    printf("%.2f\n",age/count);
    return 0;
}
