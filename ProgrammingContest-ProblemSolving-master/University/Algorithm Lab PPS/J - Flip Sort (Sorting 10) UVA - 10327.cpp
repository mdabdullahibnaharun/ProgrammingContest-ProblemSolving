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
const int MAXN = 1e5 + 3;

static int cnt = 0;

void bubbleSort(int a[],int n)
{
    int s,i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                s=a[j];
                a[j]=a[j+1];
                a[j+1]=s;
                cnt++;
            }
        }
    }
}

void solve()
{
    int N;
    while(cin>>N)
    {
        int ary[MAX],i,j;
        for(int i = 0; i<N; ++i)
        {
            scanf("%d",&ary[i]);
        }

        bubbleSort(ary,N);

        printf("Minimum exchange operations : %d\n",cnt);
        cnt=0;
    }

}

int main()
{
    solve();
    return 0;
}
