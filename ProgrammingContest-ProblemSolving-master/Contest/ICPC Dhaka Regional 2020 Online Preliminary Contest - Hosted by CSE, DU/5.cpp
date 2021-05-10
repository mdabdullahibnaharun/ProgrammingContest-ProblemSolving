#include<bits/stdc++.h>

#include <iostream>
#include <algorithm>
#include <string>
#include <stdbool.h>
#include <cstdio>
#include <iterator>
#include <vector>
#include <map>
#include <set>

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
const int MAX = 1001;
const int MAXX = 100005;
const int MAXN = 1e5 + 3;

//JUDGE_ID: 304332WQ

int maxim(int a,int b){
    return (a>b)?a:b;
}

int  mergeArray(int arr[],int l,int m,int r)
{
    int i,j,k;
    int sz1 = m-l+1;
    int sz2 = r-m;
    int cnt = 0;

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

int mergeSort(int arr[],int l,int r)
{
    int cnt=0;
    if(l<r)
    {
        int mid = l+(r-l)/2;

        cnt+=mergeSort(arr,l,mid);
        cnt+=mergeSort(arr,mid+1,r);
        cnt+=mergeArray(arr,l,mid,r);
    }
    return cnt;
}

int maxSubArraySum(int a[], int sz)
{
   int msf = a[0];
   int cmx = a[0];

   for (int i = 1; i < sz; i++)
   {
        cmx = maxim(a[i], cmx+a[i]);
        msf = maxim(msf, cmx);
   }
   return msf;
}

void solve()
{

    int t,i,j=1;
    cin>>t;
    while(t--)
    {
        int s,sum=0,flag = 0,m=0;
        cin>>s;
        int arr[s+5];
        for(i=0; i<s; i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                flag=1;
            }

        }
        if(flag)
        {
            int m = mergeSort(arr,0,s-1);
            sum = maxSubArraySum(arr,s);
            printf("Case %d: %d %d\n",j++,sum,m);
        }
        else
        {
            int m = mergeSort(arr,0,s-1);
            for(i=0; i<s; i++)
            {
                if(arr[i]>0)
                    sum+=arr[i];
            }
            printf("Case %d: %d %d\n",j++,sum,m);
        }

    }

}

int main()
{
    solve();
    return 0;
}
