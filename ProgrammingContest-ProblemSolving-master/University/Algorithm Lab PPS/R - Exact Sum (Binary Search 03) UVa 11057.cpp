/*
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
const int MAX = 1000005;


void solve()
{
    int t,cost,b1,b2,x,y,res,i,j;
    while(scanf("%d",&t)!=EOF)
    {

        int arr[t];
        for(i=0; i<t; i++)
            scanf("%d",&arr[i]);

        sort(arr,arr+t);
        scanf("%d",&cost);

        for(i=0; i<t; i++)
        {
            for(j=i; j<t; j++)
            {
                x = arr[i];
                y = arr[j];
                res = abs(x-y);
                if(x+y==cost)
                {
                    b1=x;
                    b2=y;
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",b1,b2);
    }

}

int main()
{
    solve();
    return 0;
}

*/

#include<stdio.h>
#include<math.h>


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
const int MAX = 1000005;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}

void solve()
{
    int t,cost,b1,b2,x,y,res,i,j;
    while(scanf("%d",&t)!=EOF)
    {

        int arr[t];
        for(i=0; i<t; i++)
            scanf("%d",&arr[i]);

        bubbleSort(arr,t);
        scanf("%d",&cost);

        for(i=0; i<t; i++)
        {
            for(j=i; j<t; j++)
            {
                x = arr[i];
                y = arr[j];
                res = abs(x-y);
                if(x+y==cost)
                {
                    b1=x;
                    b2=y;
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",b1,b2);
    }

}

int main()
{
    solve();
    return 0;
}


