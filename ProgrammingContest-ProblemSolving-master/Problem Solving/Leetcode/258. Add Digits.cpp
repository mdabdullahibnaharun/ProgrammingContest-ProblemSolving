#include<bits/stdc++.h>
using namespace std;

int addDigits(int n){
int t, sum = 0, remainder;
    int i;

    t = n;

    while (t != 0)
    {
        remainder = t % 10;
        t  = t / 10;
         sum = sum + remainder;
    }

    while(sum>9)
    {
        remainder = sum%10;
        sum= sum/10;
        sum= sum+remainder;

    }

   return sum;
}
