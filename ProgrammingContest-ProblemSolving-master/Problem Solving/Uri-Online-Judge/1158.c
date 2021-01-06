#include<stdio.h>
int main()
{
    int i,n,x,y,sum=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d %d",&x,&y);
            //x=(x%2==0)?x++:x;
            if(x%2==0)x++;
            sum=x;
            while(--y){
                x+=2;
                sum+=x;
            }
            printf("%d\n",sum);
        }
        return 0;
}
