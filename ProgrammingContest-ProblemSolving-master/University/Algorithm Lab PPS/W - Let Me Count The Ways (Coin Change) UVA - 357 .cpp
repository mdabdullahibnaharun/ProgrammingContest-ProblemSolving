#include<bits/stdc++.h>

using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define sqre(x) ((x)*(x))
#define lli  long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 1001;
const int MAXX = 100005;
const int MAXN = 1e5 + 3;


lli changes[30025];

void coin_change_dp()
{
    int i,j,k;
    //changes valuses
    int coin[5] = {1,5,10,25,50};
    //initialize all 0
    memset(changes,0,sizeof(changes));
    //there is one way
    changes[0]=1;

    for(i=0; i<5; i++)
    {
        k = coin[i];
        for(j=k; j<=30025; j++)
        {
            changes[j]+=changes[j-k];
        }
    }
}


int main()
{
    int v;
    coin_change_dp();
    while(cin>>v)
    {
        if(changes[v]==1)
        {
            printf("There is only %ld way to produce %d cents change.\n",changes[v],v);
        }
        else
        {
            printf("There are %ld ways to produce %d cents change.\n",changes[v],v);
        }
    }
    return 0;
}
