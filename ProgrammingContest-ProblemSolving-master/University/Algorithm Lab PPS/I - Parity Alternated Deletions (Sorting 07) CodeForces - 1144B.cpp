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

void solve()
{
    int n,e,x,i;
    while(cin>>n)
    {
        int sum =0;
        vector<int> evenv;
        vector<int> oddv;

        for(i = 0 ; i<n ; i++)
        {
            cin>>e;
            if(e%2!=0)
            {
                oddv.push_back(e);
            }
            else
            {
                evenv.push_back(e);
            }
        }

        sort(all(oddv));
        sort(all(evenv));

        int len1 = evenv.size();
        int len2 = oddv.size();


        if(len1 == len2 || abs(len1-len2) == 1)
        {
            cout<<0;
        }
        else
        {
            if (len1 > len2)
			{
				x = len1-len2-2;

				for (i=x; i>=0; i--){
				  sum += evenv[i];
				}
			}
			else
			{
				x = len2-len1-2;

				for (i=x; i>=0; i--){
				  sum += oddv[i];
				}
			}
			cout << sum <<endl;
        }
        evenv.clear();
        oddv.clear();
    }
}

int main()
{
    solve();
    return 0;
}












/*
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

    int n,i,len1,len2,k,m;
    while(cin>>n)
    {
        int sum=0;
        int i = 0,j=0;
        int oddvlue[20002],evenvalue[20002];
        for(k=0; k<n; k++)
        {
            int p;
            cin>>p;
            if(p%2!=0)
                oddvlue[i++]=p;
            else
                evenvalue[j++]=p;
        }
        mergeSort(oddvlue,0,i-1);
        mergeSort(evenvalue,0,j-1);

        len1 = i;
        len2 = j;

        if(len1==len2 )
            cout<<0;
        else
        {
            if(len1>len2)
            {
                m = len1-len2-2;
                for(k=m; k>=0; k--)
                {
                    sum+=evenvalue[k];
                }
            }
            else
            {
                m = len2-len1-2;
                for(k=m; k>=0; k--)
                {
                    sum+=oddvlue[k];
                }

            }
            cout<<sum;
        }
        cout<<endl;
    }

}

int main()
{
    solve();
    return 0;
}
*/
