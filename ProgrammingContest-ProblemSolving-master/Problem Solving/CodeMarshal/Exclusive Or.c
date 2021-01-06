/*
#include<stdio.h>
int main(){
    long long int n,sum=0,x;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld",&x);
        sum^=x;
    }
    printf("%lld\n",sum);
return 0;
}
*/
/*
//shimul vhai

#include <stdio.h>
int main(){
	long long int t,sum,x;
	scanf("%lld",&t);
	sum=0;
	while(t--){
		scanf("%lld",&x);
		sum^=x;
	}
	printf("%lld\n",sum );
	return 0;
}
*/
//sudocode

#include <stdio.h>
int main()
{
    long long int t,sum,x;
    sum=0;
    for(scanf("%lld%lld",&t,&x); t--; scanf("%lld",&x))
        sum^=x;
    printf("%lld\n",sum );
    return 0;
}
