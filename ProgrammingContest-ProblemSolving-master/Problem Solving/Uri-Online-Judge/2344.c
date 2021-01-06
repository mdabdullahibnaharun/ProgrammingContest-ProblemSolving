#include<stdio.h>
int main()
{
    int n;
    char c;
    scanf("%d",&n);
    if(n>=0&&n<=100){
    if(n==0)c='E';
    else if(n>=1 && n<=35)c='D';
    else if(n>=36 && n<=60)c='C';
    else if(n>=61 && n<=85)c='B';
    else if(n>=86 && n<=100)c='A';
    printf("%c\n",c);
    }
return 0;
}
