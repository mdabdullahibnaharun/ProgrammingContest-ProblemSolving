#include<bits/stdc++.h>

#include <iostream>
#include <algorithm>
#include <string>
#include <stdbool.h>
#include <cstdio>
#include <iterator>
#include <vector>
#include <map>
#include <set>

using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define sqre(x) ((x)*(x))
#define lli  long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 1001;
const int MAXX = 100005;
const int MAXN = 1e5 + 3;


int LCS(char inp1[],char inp2[])
{
    int i, m;

    //char inp1[n],inp2[n],matchary[n];
    //cin>>inp1>>inp2;

    int l1=strlen(inp1);
    int l2=strlen(inp2);

    //cout<<"l1="<<l1<<" l2="<<l2<<endl;

    int res[l2+1][l1+1];

    for(i=0; i<l1+1; i++) //making initial column 0
    {
        res[0][i]=0;
    }
    for(i=0; i<l2+1; i++) //making initial row 0
    {
        res[i][0]=0;
    }

    m=0;

    for(i=1; i<l2+1; i++)
    {
        for(int j=1; j<l1+1; j++) //l1+8
        {
            if(inp1[j-1]==inp2[i-1])//i=0\\j=1,2,3,4,5,6,7,
            {
                res[i][j]=res[i-1][j-1]+1;
                //matchary[m]=inp2[j-1];
                //m++;
            }
            else
            {
                if(res[i-1][j]>res[i][j-1])
                {
                    res[i][j]=res[i-1][j];
                }
                else
                {
                    res[i][j] = res[i][j-1];
                }
            }
            //cout<<res[i][j]<<"\t";
        }
        //cout<<endl;
    }
    //cout<<"LCS length = "<<res[l2][l1]<<endl;
    //cout<<"MATCH = "<<matchary<<endl;
    return (res[l2][l1]);
}


int main()
{
    char inp1[MAX],inp2[MAX];
    int cs=0;
    while(gets(inp1))
    {
        if(strcmp(inp1,"#")==0)
        {
            break;
        }
        gets(inp2);
        printf("Case #%d: you can visit at most %d cities.\n", ++cs, LCS(inp1,inp2));
    }
    return 0;
}
