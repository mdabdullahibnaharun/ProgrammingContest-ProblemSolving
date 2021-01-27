#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z,s;
    scanf("%d",&x);
    y=x/5;
    z=x%5;
    if(z==0)printf("%d\n",y);
    else{
        s=y+1;
        printf("%d\n",s);
    }
    return 0;
}
