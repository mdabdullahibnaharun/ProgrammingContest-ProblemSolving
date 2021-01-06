#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
    char str[10000];
    int t , i ;
    scanf("%d",&t);
    for(i = 1 ; i<=t ;  i++){
        scanf(" %[^\n]",&str);
        strupr(str);
        printf("Case %d : %s\n",i,str);
    }
    return 0;
}
