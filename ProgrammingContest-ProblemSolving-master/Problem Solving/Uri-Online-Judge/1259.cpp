#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin>>t;
    int a[100000];
    for(int k = 0 ; k < t ; k++)
        cin>>a[k];

    sort(a,a+t);

    int even[100000],odd[100000];

    int ev=0,od=0;
    for(int i=0;i<t;i++)
    {
        if(a[i]%2==0)
        {
            even[ev++]=a[i];
        }
    }
    for(int i=0;i<t;i++)
    {
        if(a[i]%2==1)
        {
            odd[od++]=a[i];
        }
    }

    for(int i = 0 ; i<ev ; i++)
        cout<<even[i]<<endl;

       reverse(odd,odd+od);

    for(int i = 0 ; i<od; i++)
        cout<<odd[i]<<endl;

    return 0;
}
/*
int main(){
    int t;int a[1000],b[1000];
    cin>>t;
    for(int k = 0 ; k < t ; k++)
        cin>>a[k];

    sort(a,a+t);



    int i,p=0;
    for(i = 0 ; i < t ; i++)
    {
        if(a[i]%2==0){
            b[p]=a[i];
            p++;
        }
    }

    for(int j = t ;  j >= 0 ; j-- )
    {
        if(a[j]%2==1)
            b[p++]=a[j];
    }

    for(int i = 0 ; i<t ;i++)
        printf("%d\n",b[i]);


    return 0;
}
*/
