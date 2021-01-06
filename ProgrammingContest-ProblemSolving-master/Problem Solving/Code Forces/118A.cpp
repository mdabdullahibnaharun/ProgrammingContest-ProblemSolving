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

bool isVowel(char c){
    if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='y'){
        return true;
    }
    return false;
}

int main(){
    string str;
    getline(cin,str);
    transform(str.begin(),str.end(),str.begin(),::tolower);
    for(int i =0 ; i<str.length() ; i++){
     if(isVowel(str[i]))
        {
            printf(".%c",str[i]);
        }
    }
    cout<<endl;
    return 0;
}
