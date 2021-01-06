#include <bits/stdc++.h>
using namespace std;
int main()
{
    char name[1000];
    double dis,total=0.0;
    int count=0;

    while(scanf("%[^\n]",&name)!=EOF){
        scanf("%lf",&dis);
        total += dis;
        count++;
    }

    printf("%.1lf\n",total/(float)count);

    return 0;
}
