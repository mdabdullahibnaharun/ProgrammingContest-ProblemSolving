#include<stdio.h>
int main()
{
    /*
    int X, start,end;
    scanf("%d %d",&start,&end);
    if(start==end)
    {
        printf("O JOGO DUROU %d HORA(S)\n",24-start+end);
    }
    else if(start<=end)
    {
        printf("O JOGO DUROU %d HORA(S)\n",end-start);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",24-start+end);
    }
    return 0;
*/


        int a,b;
        scanf ("%d%d", &a, &b);
        if(a==b){
            printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
        }
        else if(a<=b){
            printf ("O JOGO DUROU %d HORA(S)\n",b-a);
        }
        else{
            printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
        }
        return 0;

}
