#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d %d",&n,&m);
		printf("%d\n",(n%m)+(n/m));
		n=m=0;
	}
return 0;
}
