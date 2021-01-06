#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int a,b,ra,rb;
		scanf("%lld %lld",&a,&b);
		ra=a%10;
		rb=b%10;
		if(ra==rb){
			printf("encaixa\n");
		}
		else if(ra!=rb){
			printf("nao encaixa\n");
		}
	}
return 0;
}
