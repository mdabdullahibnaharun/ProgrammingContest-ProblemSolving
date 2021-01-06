#include<bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    double a,b,l;
    int  n,i;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        scanf("%lf %lf", &a,&b);
        l=log10(a);
        l=l*b;
        printf("%.f\n",floor(l+1));
    }
    return 0;
}


/*
int pow(long long int n,long long int m){
	long long int temp=1,i;
	for(i=1;i<=m;i++){
		temp*=n;
	}
	return temp;
}
int digit(long long int temp){
	long long int n,remider,count=0;
	while(temp!=0){
		temp/=10;
		count++;
	}
	return count;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long int temp,n,m,c;
	scanf("%lld %lld",&n,&m);
	temp=pow(n,m);
	printf("%lld\n",c=digit(temp));
	temp=n=m=c=0;
	}
	return 0;
}
*/
