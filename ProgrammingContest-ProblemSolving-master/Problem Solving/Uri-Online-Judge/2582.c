#include<stdio.h>
#include<string.h>
int main()
{
    char s[11][25]={
        "PROXYCITY",
        "P.Y.N.G.",
        "DNSUEY!",
        "SERVERS",
        "HOST!",
        "CRIPTONIZE",
        "OFFLINE DAY",
        "SALT",
        "ANSWER!",
        "RAR?",
        "WIFI ANTENNAS"
    };
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d",&n);
        scanf("%d",&m);
        printf("%s\n",s[n+m]);
    }
    return 0;
}
