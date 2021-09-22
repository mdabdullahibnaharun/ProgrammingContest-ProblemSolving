#include<bits/stdc++.h>

using namespace std;

int Occurs(char str[],char c){

    int sum = 0;

    for(int i = 0 ; i<strlen(str) ; i++){
        if(str[i]==c)
            sum++;
    }
    return sum;

}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        char str[1000];
        scanf(" %[^\n]s ",&str);

        char c;
        scanf(" %c",&c);

        tolower(c);
        for(int i = 0; str[i]; i++){
        str[i] = tolower(str[i]);
        }

        int occur = Occurs(str,c);

        if(occur>0){
            printf("Occurrence of '%c' in '%s' = %d\n",c,str,occur);
        }
        else{
            printf("'%c' is not present\n",c);
        }

    }

    return 0;
}
