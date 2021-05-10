#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>
#include <stdbool.h>
#include <cstdio>
#include <vector>
#include <set>

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


lli  mergeArray(lli arr[],int l,int m,int r)
{
    int i,j,k;
    int sz1 = m-l+1;
    int sz2 = r-m;
    lli cnt = 0;

    lli left[sz1];
    lli right[sz2];

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
            cnt+=sz1-i;
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
    return cnt;
}

lli mergeSort(lli arr[],int l,int r)
{
    lli cnt=0;
    if(l<r){
    int mid = l+(r-l)/2;

    cnt+=mergeSort(arr,l,mid);
    cnt+=mergeSort(arr,mid+1,r);
    cnt+=mergeArray(arr,l,mid,r);
    }
    return cnt;
}


void solve()
{
    lli sz;
    while(cin>>sz)
    {
        if(sz==0)break;
        lli arr[sz];
        for(int i = 0; i<sz ; i++)
        {
            cin>>arr[i];
        }
        cout<<mergeSort(arr,0,sz-1)<<endl;
    }

}

int main()
{
    solve();
    return 0;
}
