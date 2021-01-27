#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[2000][30];
    int i,j;
    for(i=0; i<2000; i++) {
        scanf("%s",s[i]);
        if(s[i][0]=='#')break;
        else strupr(s[i]);
        continue;
    }
    for(j=0; j<i; j++) {
        if(strcmp(s[j],"HELLO")==0) {
            printf("Case %d: ENGLISH\n",j+1);
        }
        else if(strcmp(s[j],"HOLA")==0) {
            printf("Case %d: SPANISH\n",j+1);
        }
        else if(strcmp(s[j],"HALLO")==0) {
            printf("Case %d: GERMAN\n",j+1);
        }
        else if(strcmp(s[j],"BONJOUR")==0) {
            printf("Case %d: FRENCH\n",j+1);
        }
        else if(strcmp(s[j],"CIAO")==0) {
            printf("Case %d: ITALIAN\n",j+1);
        }
        else if(strcmp(s[j],"ZDRAVSTVUJTE")==0) {
            printf("Case %d: RUSSIAN\n",j+1);
        }
        else {
            printf("Case %d: UNKNOWN\n",j+1);
           // printf("UNKNOWN\n");
        }
    }
    return 0;
}
