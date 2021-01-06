#include<stdio.h>
#define A 20
int main()
{
    char n[A];
    printf("Enter any string: ");
    gets(n);
    int i = 0, w = 1;
    while(n[i]!='\0')
    {
        if(n[i]==' ' || n[i]=='\n' || n[i]=='\t')
        {
            w+=1;
        }
        i++;
    }
    printf("Words = %d\n",w);
return 0;
}
