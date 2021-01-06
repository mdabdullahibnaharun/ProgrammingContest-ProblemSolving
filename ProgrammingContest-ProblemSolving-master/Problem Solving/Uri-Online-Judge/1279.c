#include<stdio.h>
#include<math.h>
int main(){
    int y;
    scanf("%d",&y);
    if (y%4==0 || y%400==0 || y%100!=0){
       // printf("This is leap year\n");
        if (y%15==0){
            printf("This is leap year\n");
            printf("This is huluculu festival year\n");
        }
        else if (y%55==0){
            printf("This is Bulukulu festival year\n");
        }
    }
     else{
        printf("This is an ordinary year.\n");
    }
return 0; 
}