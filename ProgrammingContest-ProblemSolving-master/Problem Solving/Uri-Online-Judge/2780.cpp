#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    scanf("%d",&d);

    if(d<=800 && d>= 0)
        printf("1\n");
    if(800<d && d<=1400)
        printf("2\n");
    if(1400<d && d<=2000)
        printf("3\n");
    return 0;
}
