#include <stdio.h>
int main(){
    int m=0,n=0,i=0,result=0;
    while(scanf("%d%d",&n,&m)!=EOF){
    result = 0;
        for(i = 1; i <= n; i++){
            int value=0;
            scanf("%d",&value);
            if(i>=(n-m)){
                result+=value;
            }
        }
        printf("%d\n",result);
    result=0;
    }
    return 0;
}
