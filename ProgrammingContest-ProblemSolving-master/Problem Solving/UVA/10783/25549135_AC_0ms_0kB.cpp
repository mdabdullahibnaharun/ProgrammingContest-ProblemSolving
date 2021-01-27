#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j,a,b;
    cin >> t;
    for(j = 0; j < t; j++) {
        cin >> a >> b;
        int sum = 0;
        for(int i = a; i <= b; i++) {
            if(i%2)sum+=i;
        }
        cout << "Case " << j+1 << ": " << sum << endl;
    }
    return 0;
}

