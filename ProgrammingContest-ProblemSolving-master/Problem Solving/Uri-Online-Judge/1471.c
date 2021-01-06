#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

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
#define gcr getchar
#define endl "\n"
#define Square(x) ((x)*(x))
#define Cube(x) ((x)*(x)*(x))
#define Sync() ios_base::sync_with_stdio(false),cin.tie(NULL)
#define fileout fopen("output.txt","w");
#define filein fopen("input.txt","r");
#define error fopen("error.txt","w");
#define inf le9+1
#define Abs(x) ((x,0)?-(x):(x))
#define Maxmum(x,y) (x^((x^y)&-(x<y)))
#define Minium(x,y) (y^((x^y)&-(x<y)))
#define Swap(a,b) (a=a^b,b=a^b,a=a^b)
#define continuekey printf("\n\tPress any key to continue.....")
#define gc getch()
#define sys system


///TLE

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int n=0,m=0;

    int a[10000] = {0};
    while(EOF)
    {
        scanf("%d %d",&m,&n);
        for(int i = 0 ; i<n ; i++)
            scanf("%d",&a[i]);

        for(int  i = 0 ; i < n-1 ; i++){
            for(int j = 0 ; j<n-i-1 ; j++){
                 if (a[j] > a[j+1])
              swap(&a[j], &a[j+1]);
            }
        }

        bool flag = true;
        for(int j = 0 , i = 0 ; i<n ; ++i)
        {
                if(a[i]==++j){
                    continue;
                }
                else{
                    printf("%d ",j++);
                    flag = false;
                }
        }
        //printf("\n");

        if(flag)
        {
            printf("\n*\n");
        }
    }
    return 0;
}
