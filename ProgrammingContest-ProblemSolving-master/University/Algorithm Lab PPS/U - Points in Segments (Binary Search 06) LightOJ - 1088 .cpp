#include<bits/stdc++.h>

using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define sqre(x) ((x)*(x))
#define lli   long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 100005;
const int MAXN = 1e5 + 3;



void mergeArray(int arr[],int l,int m,int r)
{
    int i,j,k;
    int sz1 = m-l+1;
    int sz2 = r-m;

    int left[sz1];
    int right[sz2];

    for(i=0; i<sz1; i++)
        left[i]=arr[l+i];

    for(j=0; j<sz2; j++)
        right[j]=arr[m+1+j];

    i=0,j=0;
    k=l;

    while(i<sz1 && j<sz2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
        }
        k++;
    }

    while(i<sz1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<sz2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid = l+(r-l)/2;

        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        mergeArray(arr,l,mid,r);
    }
}

void solve()
{
    int t,n,q,i,j=0,a,b,point1,point2,sub;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        mergeSort(arr,0,n-1);
        printf("Case %d:\n",j+1);
        while(q--)
        {
            cin>>a>>b;
            point1 = lower_bound(arr,arr+n,a)-arr;
            point2 = upper_bound(arr,arr+n,b)-arr;
            sub = point2-point1;
            printf ("%d\n",sub) ;
        }
    }

}

int main()
{
    solve();
    return 0;
}
