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

int f[MAX] ;

int fibo()
{
    f[0]=0;
    f[1]=1;
    f[2]=1;
    for(int i = 3 ; i < MAX ; i++)
    {
        f[i] = f[i-2]+f[i-1];
    }
}

int sum(int n){
    int sum=0;
    for(int i = 0 ; i <= n ; i++){
        sum+=f[i];
    }
    return sum;
}

int main ()
{
    fibo();
    int n ;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}
