#include<bits/stdc++.h>
using namespace std;

static int cnt=0;

void bSort(int arr[], int n)
{
    int temp;
    for(int i = 0 ; i < n-1 ; i++){
        for(int j  = 0 ; j < n - i - 1 ; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                cnt++;
            }
        }
    }
}


int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n,j;
        scanf("%d",&n);
        int arr[n];
        for(j=0;j<n;j++){
            cin>>arr[j];
        }
        bSort(arr,n);
        printf("Optimal train swapping takes %d swaps.\n",cnt);
        cnt=0;
/*
        for(j=0;j<n;j++){
            cout<<arr[j]<<endl;;
        }
*/
    }
    return 0;
}
