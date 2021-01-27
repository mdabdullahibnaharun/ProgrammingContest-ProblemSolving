#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,as,bs,c;
    while(c<201){
        scanf("%d %d",&a,&b);
        c++;
        if(a==0 && b==0)break;
        int count=0;
        for(int i=a;i<=b;i++){
           float as=sqrt(i);
            if(as-(int)as==0){
                count+=1;
            }
        }
        printf("%d\n",count);
        count=0;
    }
return 0;
}
