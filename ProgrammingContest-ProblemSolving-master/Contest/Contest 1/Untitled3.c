#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b,t;
    while(1){
            scanf("%d %d",&a,&b);
            if(a==0&&b==0)break;
        int count=0;
        for(i=a;i<=b;i++){
            t=sqrt(i);
            if(i==t*t)
                count+=1;
        }
        printf("%d\n",count);
    }
    return 0;
}
