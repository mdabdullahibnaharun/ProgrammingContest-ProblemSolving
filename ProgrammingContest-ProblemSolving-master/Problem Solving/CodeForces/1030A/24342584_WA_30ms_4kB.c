#include<stdio.h>
#include<math.h>
int main()
{
    int b,n;
    scanf("%d",&b);
    for(int i=0; i<b; i++)
    {
        scanf("%d",&n);
    }
    if(n==1){
        printf("HARD\n");
    }
    else if(n==0){
        printf("EASY\n");
    }
    return 0;
}
