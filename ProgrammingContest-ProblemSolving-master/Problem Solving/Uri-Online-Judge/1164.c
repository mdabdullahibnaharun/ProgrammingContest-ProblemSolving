#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int m,i,p,s=0;
        scanf("%d",&m);
        p=m;
        for(i=1; i<p; i++){
            if(p%i==0){
                s+=i;
            }
        }
        if(s==m){
            printf("%d eh perfeito\n",m);
        }
        else{
            printf("%d nao eh perfeito\n",m);
        }
    }
return 0;
}
