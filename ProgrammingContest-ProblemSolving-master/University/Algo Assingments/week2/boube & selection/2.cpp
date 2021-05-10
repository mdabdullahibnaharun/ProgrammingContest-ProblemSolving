#include<iostream>
#include<cstdio>
#include<string.h>
#include<stdlib.h>

using namespace std;

#define MAX 10005

void bubbleSort(int arr[], int n)
{
    int i, j,k, range;

    range  = n - 1;
    for(i = 0 ; i < n - 1 ; i++)
    {
        for(j = 0 ; j < range - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                k = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = k;
            }
        }
    }
}


int main()
{
    int tc,i,j;
    scanf("%d",&tc);
    while(tc--)
    {
        int arr[MAX],sz,n,m,maxsum=0,minsum=0;
        scanf("%d %d",&n,&m);
        sz=n;
        for(i=0; i<sz; i++)
        {
            scanf("%d",&arr[i]);
        }

        bubbleSort(arr, sz);

        int dif = abs(n-m);
        for(int p=1,i=0,j=sz-1; p<=dif; i++,j--,p++)
        {
            maxsum+=arr[j];
            minsum+=arr[i];
        }
        printf("%d\n",abs(maxsum-minsum));
    }
    return 0;
}
