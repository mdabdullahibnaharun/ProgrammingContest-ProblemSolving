#include<bits/stdc++.h>

using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define sqre(x) ((x)*(x))
#define lli  long long int
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
    if(l<r){
    int mid = l+(r-l)/2;

    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    mergeArray(arr,l,mid,r);
    }
}


void solve(){

    int n,i,k;
    int cnt=0,cover=0,mini=0;

    cin>>n>>k;
    int houses[n];

    for(i=0;i<n;i++){
        cin>>houses[i];
    }

    mergeSort(houses,0,n-1);

    for(i=0;i<n;i++){
        if(cover<houses[i]){
            mini=houses[i];
            cnt++;
            cover=mini+k;
        }
        else if((houses[i]-mini)<= k){
            cover = houses[i]+k;
        }
    }
    printf("%d\n",cnt);

}

int main(){
    solve();
    return 0;
}
