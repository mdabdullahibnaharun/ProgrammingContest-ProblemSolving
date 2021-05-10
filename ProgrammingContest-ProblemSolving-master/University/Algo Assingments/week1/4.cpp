#include<bits/stdc++.h>
using namespace std;


void solve()
{
    char arr[10005];int  freq[10005];

    int sz, i, j, cnt;
    scanf("%s",arr);

    sz=strlen(arr);

    for(i=0; i<sz; i++)
    {
        freq[i] = -1;
    }

    for(i=0; i<sz; i++)
    {
        cnt = 1;
        for(j=i+1; j<sz; j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = cnt;
        }
    }
    for(i=0; i<sz; i++)
    {
        if(freq[i] != 0)
        {
            printf("%c %d\n", arr[i], freq[i]);
        }
    }
}

int main()
{
    solve();
    return 0;
}
