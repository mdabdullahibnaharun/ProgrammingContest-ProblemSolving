#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0){
        printf("Weird\n");
    }else{
        if(n>=2 && n<=5){
            printf("Not Weird\n");
        }else if(n>=6 && n<=20){
            printf("Weird\n");
        }
        else if (n>20){
            printf("print Not Weird\n");
        }
    }
return 0;
}
