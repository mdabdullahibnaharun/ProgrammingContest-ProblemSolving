#include<stdio.h>
int main(){
    int i, n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int m;
        scanf("%d",&m);
        if(m>=90 && m<=100){
            printf("Student %d: A+\n",i);
        }
        else if (m>=80 && m<=89){
            printf("Student %d: A\n",i);
        }
        else if (m>=70 && m<=79){
            printf("Student %d: A-\n",i);
        }
        else if (m>=60 && m<=69){
            printf("Student %d: B+\n",i);
        }
        else if (m>=50 && m<=59){
            printf("Student %d: B-\n",i);
        }
        else if (m>=40 && m<=49){
            printf("Student %d: C\n",i);
        }
        else if (m>=35 && m<=39){
            printf("Student %d: D\n",i);
        }
        else if (m>=0 && m<=34){
            printf("Student %d: F\n",i);
        }
    }
    return 0;
}
