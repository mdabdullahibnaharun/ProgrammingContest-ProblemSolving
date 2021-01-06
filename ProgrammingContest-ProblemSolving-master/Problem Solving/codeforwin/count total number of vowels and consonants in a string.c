#include<stdio.h>
#define A 20
int main()
{
    char n[A];
    int i = 0 ;

    printf("Enter string : ");
    gets(n);

    /*
    for(i=0;i<A;i++){
        scanf("%c",&n[i]);
    }n[i]='\0';
    */

    int l = 0;
    i=0;

    while(n[i]!='\0')
    {
        l++;;
        i++;
    }

    printf("len = %d\n",l);

    i=0;

    int v = 0, c = 0;

    for(i=0; i<=l; i++)
    {
        if((n[i]>='a' && n[i]<='z') || (n[i]>='A' && n[i]<='Z'))
        {

            if(n[i] =='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' ||n[i] =='A' || n[i]=='E' || n[i]=='I' || n[i]=='O' || n[i]=='U'){
                       v++;;
                    }
            else{
                c++;
            }

        }
    }
    printf("vowel = %d\n",v);
    printf("consonant = %d\n",v);

    return 0;
}
