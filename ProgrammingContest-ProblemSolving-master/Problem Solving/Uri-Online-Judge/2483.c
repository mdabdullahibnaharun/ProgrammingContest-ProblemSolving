#include<stdio.h>
#include<string.h>
int main()
{
    long int n;
    char c[]="Feliz natal!";
    int i,j;
    scanf("%d",&n);
    for(i=0;c[i]!='\0';i++){
        printf("%c",c[i]);
        if(i==9){
            for(j=0;j<n-1;j++)
                printf("a");
        }
    }
    printf("\n");
    return 0;
}
