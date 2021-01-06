#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        long int a,b;
        char c;
        scanf("%ld %ld %c",&a,&b,&c);
        if(c=='+')
            printf("Case %d: %ld\n",i,a+b);
        else if(c=='-'){
                printf("Case %d: %ld\n",i,a-b);
        }
        else if(c=='/' && b!=0){
                printf("Case %d: %ld\n",i,a/b);
        }
        else if(c=='*')
            printf("Case %d: %ld\n",i,a*b);
        else if(c=='%' && b!=0){
                printf("Case %d: %ld\n",i,a%b);
        }
    }
    return 0;
}
