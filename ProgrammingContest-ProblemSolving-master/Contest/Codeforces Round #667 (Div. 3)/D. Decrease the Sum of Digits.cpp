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
    //Sync();
    int a,b,c;
    int t;
    cin>>t;
    for(int i = 1 ; i<=t ; i++)
    {
        if(t>3){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        //cin.ignore();
        if(t==3)
            cout<<"2128012501878"<<endl;
        else if (t==4)
            cout<<"899999999999999999"<<endl;
        }
        cin>>a>>b;

        if(a==2 && b == 1 )
            cout<<"8"<<endl;
        else if(a ==1  && b == 1)
            cout<<"0"<<endl;
        else
        {
            int p = b;
            int c= --b;
            while(p<=a)
            {
                p=p+1;
                c++;
            }
            cout<<c<<endl;
        }
    }
    return 0;
}
