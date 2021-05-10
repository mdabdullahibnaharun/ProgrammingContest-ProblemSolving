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

    int b,s,i,j=1;
    while(cin>>b>>s){
        if(b==0&&s==0)break;

        int arrb[MAX];
        int arrs[MAX];

        for(i=0;i<b;i++){
            cin>>arrb[i];
        }

        for(i=0;i<s;i++){
            cin>>arrs[i];
        }

        mergeSort(arrb,0,b-1);
        mergeSort(arrs,0,s-1);

        int minimim = arrb[0];

        if(b-s<=0){
            printf("Case %d: %d\n",j++,0);
        }
        else{
           printf("Case %d: %d %d\n",j++,b-s,minimim);
        }

    }

}


int main(){
    solve();
    return 0;
}
