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

int main(){

    //string str;
    //getline(cin,str);
    char str[500];
    cin>>str;
    int l = strlen(str);
    int i,j;
    for(i=0;i<l;i+=2){
        for(j=0;i<l-i-2;j+=2){
            if(str[j]>str[j+2]){
                //swap(str[j],str[j+2]);
                char c  = str[j+2];
                str[j+2]=str[j];
                str[j] = c;
            }
        }
    }
    cout<<str<<endl;
    return 0;
    /*
    int l,i,j;
    char s[100];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i+=2){
        for(j=0;j<l-i-2;j+=2){
            if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }
        }
    }
    printf("%s",s);
    return 0;
    */
}
