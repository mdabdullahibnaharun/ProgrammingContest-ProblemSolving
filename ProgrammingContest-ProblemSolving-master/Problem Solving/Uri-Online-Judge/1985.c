#include<stdio.h>
int main()
{
    int t;
    float n,p;
    float s=0;
    scanf("%d",&t);
    while(t--){

        scanf("%f %f",&n,&p);
        if(n==1001.00){
            s+=1.50*p;
        }
        if(n==1002.00){
            s+=2.50*p;
        }
        if(n==1003.00){
            s+=3.50*p;
        }
        if(n==1004.00){
            s+=4.50*p;
        }
        if(n==1005.00){
            s+=5.50*p;
        }
    }
    printf("%.2f\n",s);
    n=p=0;
    return 0;
}
