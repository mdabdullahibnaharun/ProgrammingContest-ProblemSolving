#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<string.h>

#define TRUE 1
#define FALSE 0
#define pi 3.1459
#define MAX 100
#define ll long long
#define lli long long int
#define ull unsigned ll
#define pf push_front
#define pb push_back
#define mod 1000000007
#define mx 300010
#define gc getchar
#define endl "\n"
#define square(x) ((x)*(x))
#define cube(x) ((x)*(x)*(x))
#define sync() ios_base::sync_with_stdio(false),cin.tie(NULL)
#define fileout fropen("output.txt","w",stdout);
#define filein fropen("input.txt","r",stdin);
#define error fropen("error.txt","w",stderr);
#define inf le9+1
#define abs(x) ((x,0)?-(x):(x))
#define max(x,y) (x^((x^y)&-(x<y)))
#define mini(x,y) (y^((x^y)&-(x<y)))
#define swap(a,b) (a=a^b,b=a^b,a=a^b)

int main(){
    double m[12][12];
    double sum=0;
    int i,n,k,j ;
    char c[2] ;
    scanf("%d",&n);
    fflush(stdin);
    scanf("%s",&c);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&m[i][j]);
            if(i==n){
                sum+=m[i][j];
            }
        }
    }
    if(c[0]=='S')
        printf("%.1lf\n",sum);
    else if(c[0]=='M')
        printf("%.1lf\n",sum/12.0);

    return 0;
}
