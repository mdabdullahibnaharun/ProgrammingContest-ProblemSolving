#include<bits/stdc++.h>
using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define lli   long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 100005;


void solve()
{
    int tc,i;
    scanf("%d",&tc);
    while(tc--){
        char str[MAX];
        scanf("%s",&str);

        int cnt = 0, len = strlen(str);
        char prev = str[0];

        if(prev == '1')cnt++;

        for(i=1;i<len;i++){

            if(prev == str[i])
                continue;

            else{
                prev = str[i];
                if(prev =='1')
                {
                    cnt++;
                }
            }
        }

        if(cnt==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}


int main()
{
    solve();
    return 0;
}



