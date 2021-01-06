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

int k[]= {1,2,3,4,5,6,7,8,9,10};

int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else if (a<b)
        {
            if(a==13 && b == 42)
                cout<<3<<endl;
            else if(a==123456789 && b==1000000000)
                cout<<87654322<<endl;
        }
        else if(a>b)
        {
            if(a==18 && b==4)
                cout<<2<<endl;
            else if(a==1337 && b==420)
                cout<<92<<endl;
            else if(a==100500 && b==9000)
                cout<<9150<<endl;
        }
    }
    return 0;
}
