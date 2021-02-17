<<<<<<< HEAD
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdbool.h>
using namespace std;


bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}



int main() {
    int a,b,cnt=0;
    cin>>a;
    for(int i = 1 ; i<=a ; i++){
        bool x = isPrime(i);
        if(x)cnt++;
    }
    printf("%d\n",cnt);
    return 0;
=======
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdbool.h>
using namespace std;


bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}



int main() {
    int a,b,cnt=0;
    cin>>a;
    for(int i = 1 ; i<=a ; i++){
        bool x = isPrime(i);
        if(x)cnt++;
    }
    printf("%d\n",cnt);
    return 0;
>>>>>>> db7bdc85a80e82f2983338b1b1b3a0776414abce
}