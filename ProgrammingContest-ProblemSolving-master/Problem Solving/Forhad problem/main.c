#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="My name is khan";
    char s2[]="And I am not a terrorist";
    int i=0,sl1=0,sl2=0,j=0;
    /*
    while(s1[i]!='\0'){
        i++;
        l++;
    }
    while(s2[j]!='\0'){
        s1[l+j]=s2[j];
    }
    */
    for(i=0; s1[i]!='\0'; i++){
        if(s1[i]==' ')
            continue;
        else
            sl1+=1;
    }
    for(j=0; s2[j]!='\0'; j++){
        if(s2[j]==' ')
            sl2+=1;
        else
            continue;
    }
    printf("Without space string length s1 = %d \nspace in s2 = %d\n",sl1,sl2);
    strcat(s1,s2);
    printf("9/11 : %s\n",s1);
    return 0;
}
