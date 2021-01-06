#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include<stdio.h>
int main()
{
    int tc,n,sn,i,j,tmp,ck;
    int num[10]= {0};

    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d %d",&n,&sn);
        ck=0;
        tmp=0;

        for(i=0; i<n; i++)
        {
            scanf("%d",&tmp);

            if(sn>tmp)
            {
                num[i] = sn-tmp;
            }
            else
            {
                num[i] = tmp-sn;
            }
        }

        tmp= num[0];

        for(j=0; j<n; j++)
        {

            if(num[j]==0)
            {
                ck=j;
                break;
            }
            else if( tmp > num[j] )
            {
                tmp=num[j];
                ck=j;
            }
        }
        printf("%d\n",ck+1);
    }
return 0;
}


/*
int main(){
    int t,i;
    cin>>t;
    while(t--){
       lli n,s;
       int pos=0;
       cin>>n>>s;
       lli a[n];
       for(i=0;i<n;i++){
        cin>>a[i];
       }
       for(i=0;i<n;i++){
         if(a[i]+1==s||a[i]-1==s||a[i]==s){
            pos = i;
         break;
        }
       }
       if(pos)
        cout<<pos+1<<endl;
    }
    return 0;
}
*/
