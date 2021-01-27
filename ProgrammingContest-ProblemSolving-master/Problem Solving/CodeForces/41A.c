#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define max 101

int main()
{
    char m[max];
    char n[max];
    gets(m);
    gets(n);

    int i,j,x=0;

    int len1=0;
    while(m[len1]!='\0')
        len1++;

    int len2=0;
    while(n[len2]!='\0')
        len2++;

    strrev(n);

    for(i=0;i<len1;i++)
    {
        if(m[i]==n[i])
            x+=1;
    }

    if(x==len2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
