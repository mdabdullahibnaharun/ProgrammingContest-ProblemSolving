#include<stdio.h>
#include<math.h>
#include<time.h>
int main(){
    int n,i;
scanf("%d",&n);
int sum=0;
for(i=0; i<n; i++){
    int h,m;
    scanf("%d %d",&h,&m);
    sum+=(23-h)*60;
    sum+=60-m;
    printf("%d\n",sum);
    sum=0;
}
return 0;
}

