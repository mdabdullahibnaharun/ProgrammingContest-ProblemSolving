#include<bits/stdc++.h>
#include<string>

using namespace std;

#define endl "\n"


int main(){
    int t;
    scanf("%d ",&t);

    while(t--){
        string c;
        int vwl = 0;
        getline(cin,c);

        transform(c.begin(),c.end(),c.begin(),::tolower);

        for(int i = 0; i<c.length()-1; i++){
            if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u'){
                vwl++;
            }
        }

        printf("Number of vowels = %d\n",vwl);
    }

    return 0;
}
