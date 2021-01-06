#include <bits/stdc++.h>
using namespace std;

#define TRUE 1
#define FALSE 0
#define PI 3.1415926535897932384626
#define MAX 100
#define ll long long
#define lli long long int
#define ull unsigned ll
#define ui unsigned int
#define us unsigned short
#define puf push_front
#define pub push_back
#define pob pop_back
#define pof pop_front
#define mp make_pair
#define mod 1000000007
#define mx 300010
#define gc getchar
#define endl "\n"
#define Square(x) ((x)*(x))
#define Cube(x) ((x)*(x)*(x))
#define Sync() ios_base::sync_with_stdio(false),cin.tie(NULL)
#define fileout fropen("output.txt","w",stdout);
#define filein fropen("input.txt","r",stdin);
#define error fropen("error.txt","w",stderr);
#define inf le9+1
#define Abs(x) ((x,0)?-(x):(x))
#define Maxmum(x,y) (x^((x^y)&-(x<y)))
#define Minium(x,y) (y^((x^y)&-(x<y)))
#define Swap(a,b) (a=a^b,b=a^b,a=a^b)

int main()
{
    int m=0,n=0,i,j;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        int arr[1000]= {0};
        bool flag = false;
        int x ;
        for(i=0; i<n; i++)
        {
            cin>>x;
            arr[x]=1;
        }

        for(i=1;i<=m;i++)
        {
            if(arr[i]==0){
                flag = true;
                cout<<i<<" ";
            }
        }
        //cout<<endl;
        if(flag == false){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/*

My solve TLE
int main()
{
    int n=0,m=0;

    int a[10000] = {0};
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        for(int i = 0 ; i<n ; i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        int flag = 1;
        for(int j = 0, i = 0 ; i<n ; ++i)
        {
            if(a[i]==++j)
            {
                continue;
            }
            else
            {
                printf("%d ",j++);
                flag = 0;
            }
        }
        printf("\n");

        if(flag==1)
        {
            printf("*\n");
        }
    }
    return 0;
}

*/
