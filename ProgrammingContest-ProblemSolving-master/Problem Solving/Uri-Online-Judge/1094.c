#include<stdio.h>
int main()
{
    int n,m,c=0,r=0,s=0;
    char cr;
    scanf("%d",&n);
    while(n--){
        scanf("%d %c",&m,&cr);
        if(cr=='c'||cr=='C') c+=m;
        else if(cr=='r'||cr=='R') r+=m;
        else if(cr=='s'||cr=='S') s+=m;
    }
    int total=c+r+s;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",c,r,s);
    printf("Percentual de coelhos: %.2f %%\n",((float)(c*100)/total));
    printf("Percentual de ratos: %.2f %%\n",((float)(r*100)/total));
    printf("Percentual de sapos: %.2f %%\n",((float)(s*100)/total));

return 0;
}
