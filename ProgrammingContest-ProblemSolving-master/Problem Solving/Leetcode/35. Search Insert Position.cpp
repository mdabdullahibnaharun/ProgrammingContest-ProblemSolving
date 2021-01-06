#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ara[15];
    int target = 0;
    vector<int>nums = {1,3,5,6};

    /***********binary Search************/
    int low=0;
    int n = nums.size();
    int heigh = n - 1 ;
    int mid ;
    while(low <= heigh){
        mid = low+(heigh-low)/2;

        if(nums[mid]==target){
            return mid ;
        }

        if(nums[mid]<target){
            low = mid + 1;
        }

        else{
            heigh = mid - 1;
        }
    }
    return low;

}
