#include<bits/stdc++.h>

using namespace std;

int main(){

    int t,cnt=1;
    cin>>t;
    while(t--){

        string str;
        cin>>str;
        sort(str.begin(),str.end());
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==str[i+1])
            {
                cnt++;
            }
            else if(cnt>1)
            {
                cout<<str[i]<<" = "<<cnt<<"\n";
                cnt=1;
            }
            else
            {
                  cout<<str[i]<<" = "<<cnt<<"\n";
            }
        }
        if(t!=0)
        cout<<"\n";
    }

}





/*
int frequency(char str[]){

    int n = strlen(str);

    int freq[26];

    memset(freq,0,sizeof(freq));

    for(int i = 0 ; i < n ; i++){
        freq[str[i]-'a']++;
    }

    for(int i = 0 ; i<n ; i++){

        if(freq[str[i]-'a']!=0){
            cout<<str[i]<<" = "<<freq[str[i]-'a']<<"\n";
            freq[str[i]-'a']=0;
        }

    }

}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        char str[1005];
        scanf(" %[^\n]s",&str);
        int n = strlen(str);
        sort(str,str+n);
        frequency(str);
        if(t>0) cout << endl;

    }

    return 0;
}
*/
