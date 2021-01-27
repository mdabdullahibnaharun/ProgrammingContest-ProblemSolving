#include<stdio.h>
#include<string.h>

#define max 101

int main()
{
    char n[max];
    gets(n);

    int len=0;
    while(n[len]!='\0')
        len++;

    int upper=0,lower=0;

    for(int i=0; i<len; i++)
    {
        if(n[i]>='a' && n[i]<='z')
            lower++;
        else if(n[i]>='A' && n[i]<='Z')
            upper++;
    }

    if(upper>lower){
        for(int i=0;i<len;i++){
            if(n[i]>='a' && n[i]<='z'){
                n[i]='A'+(n[i]-'a');
            }
        }
    }

    else if(lower>upper){
        for(int i=0; i<len; i++){
            if(n[i]>='A' && n[i]<='Z'){
                n[i]='a'+(n[i]-'A');
            }
        }
    }

    else if(lower==upper){
        for(int i=0; i<len; i++){
            if(n[i]>='A' && n[i]<='Z'){
                n[i]='a'+(n[i]-'A');
            }
        }
    }

    printf("%s\n",n);
    return 0;
}
