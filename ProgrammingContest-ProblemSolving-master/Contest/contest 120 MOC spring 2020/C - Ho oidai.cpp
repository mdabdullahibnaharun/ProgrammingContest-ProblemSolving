#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,k,i,t=1;
    cin>>tc;
    for(i = 1; i <= tc; i++) {
        long long int num;
        cin>>num;
        cout << "Case " << i << ": ";
        if(num == 0) cout << "abcdef" << endl;
        else if(num == 1) cout << "bc" << endl;
        else if(num == 2) cout << "abdeg" << endl;
        else if(num == 3) cout << "abcdg" << endl;
        else if(num == 4) cout << "bcfg" << endl;
        else if(num == 5) cout << "acdfg" << endl;
        else if(num == 6) cout << "acdefg" << endl;
        else if(num == 7) cout << "abc" << endl;
        else if(num == 8) cout << "abcdefg" << endl;
        else if(num == 9) cout << "abcdfg" << endl;
    }
return 0;
}
