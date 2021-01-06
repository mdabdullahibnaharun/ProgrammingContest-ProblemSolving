#include<stdio.h>
int main(int argc, char const* argv[])
{
    int num,sum=0;
    scanf("%d",&num);
    while(num!=0){
        sum+=num%10;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}
