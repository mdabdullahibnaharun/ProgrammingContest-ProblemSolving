#include<iostream>
#include<cstdio>
#include<math.h>
#include<stdlib.h>

using namespace std;
#define endl '\n'

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


int main()
{
    int n,i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        int arr[n];
        for(i = 0 ; i < n ; i++)
        {
            scanf("%d",&arr[i]);
        }

        mergeSort(arr,0,n-1);

        printf("%d",arr[0]);
        for(i = 1 ; i < n-1 ; i++)
        {
            printf(" %d",arr[i]);
        }
        printf(" %d\n",arr[i]);
    }
    return 0;
}
