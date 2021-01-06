#include<stdio.h>
int main(int argc, char** argv)
{
    int a,b,win;
    scanf("%d %d",&a,&b);
    if((a>=1 && a<=13) && (b>=1 && b<=13)){
        win=(a>b)?a:b;
        printf("%d\n",win);
    }
return 0;
}
