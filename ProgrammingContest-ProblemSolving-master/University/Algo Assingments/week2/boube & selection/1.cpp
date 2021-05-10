#include<iostream>
#include<cstdio>
#include<string.h>
#include<stdlib.h>

using namespace std;

#define MAX 10005

void swapvalue(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++){
          if (arr[j] < arr[min_idx]){
            min_idx = j;
          }
    }
        swapvalue(&arr[min_idx], &arr[i]);
    }
}



int main()
{
    int i,arr[MAX],n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    selectionSort(arr, n);

    printf("%d", arr[0]);
    for (i=1; i < n; i++)
        printf(" %d", arr[i]);
    printf("\n");

    return 0;
}
