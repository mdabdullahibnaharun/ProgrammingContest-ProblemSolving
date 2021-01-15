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

//*******************  Wrong Answer ******************//

void solve()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int a,d;
        scanf("%d %d",&a,&d);
        int arr[a];
        bool flag;
        for(int i  = 0 ; i < a ; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==d)flag = false;
        }

        //sort(arr,arr+a);

        int ai,aj,ak;

        for(ai =0 ; ai< a ; ai++)
            for(aj = 0 ; aj < a ; aj++)
            {
                for(ak = aj-1 ; ak < a ; ak++)
                {
                    if((arr[aj]+arr[ak])<=d)
                    {
                        flag = true;
                        break;
                    }
                }
            }

        if(flag==true)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
int main()
{
    solve();
    return 0;
}
