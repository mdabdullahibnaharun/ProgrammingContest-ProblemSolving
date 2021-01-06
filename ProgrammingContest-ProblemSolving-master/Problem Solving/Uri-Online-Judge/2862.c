#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int c;
        scanf("%d",&c);
        if(c>=100 && c<=100000){
        if(c>=8000)
            printf("Mais de 8000\n");
       // else if(c>8000)
       //     printf("Mais de 8000!\n");
        else
            printf("Inseto!\n");
        }
    }
return 0;
}
