#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n=1;
    char c[2];
    double m[12][12],sum;
    cin>>c;
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin>>m[i][j];
        }
    }
    for(i=0; i<12; i++)
    {
        for(j=n; j<12; j++)
        {
            sum+=m[i][j];
        }
        n++;
    }
    if(c[0]=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/66.0);
    return 0;
}
