 Home
Problem
Status
Contest
User
Group
Forum
Logout
abdullah100998
Solve the problems with algorithms mentioned in the names of the problems.

Begin 2020-02-10 0000 BST
Algorithm Lab Assignment 01, Spring 2020
End 2020-04-10 0000 BST
14400000
Ended
Overview
Problem
Status
Rank (14400000)
0 Comments
Previous12345…Next
Run ID	Username
Prob

All
Result

All
Time
(ms)	Mem
(MB)	Length	Lang

All
Submit Time
29878770	
abdullah100998
D
 In queue
1250	
C++
2 min ago
29819138	
abdullah100998
D
Accepted
31	0	1251	
C++
6 days ago
     
All Copyright Reserved © 2010-2021 Xu Han
Server Time 2021-03-04 125326 BST

#29819138  abdullah100998's solution for [CodeForces-1207A] [Problem D]
Status
Accepted
Time
31ms
Memory
8kB
Length
1251
Lang
GNU G++14 6.4.0
Submitted
2021-02-26 184936
Shared

RemoteRunId
108538299
Select Code
#include iostream
#include string
#include map
#include algorithm
#include iterator
#include cstdio
#include vector
#include set

using namespace std;




void solve()
{
    int t,h,b,p,f,c,burger;
    int sum=0;
    scanf(%d,&t);
    while(t--)
    {
        scanf(%d %d %d,&b,&p,&f);
        scanf(%d %d,&h,&c);

        burger = b2;

        if(hc)
        {
            if(burger=p)
            {
                sum = ph;
                b = burger-p;
                if(b=f)
                {
                    sum += fc;
                }
                else
                {
                    sum += bc;
                }
            }
            else
            {
                sum = burgerh;
            }
        }

        else
        {
            if(burger=f)
            {
                sum = fc;
                b = burger-f;
                if(b=p)
                {
                    sum += ph;
                }
                else
                {
                    sum += bh;
                }
            }
            else
            {
                sum = burgerc;
            }
        }
        printf(%dn,sum);
    }

}

int main()
{
    solve();
    return 0;
}

