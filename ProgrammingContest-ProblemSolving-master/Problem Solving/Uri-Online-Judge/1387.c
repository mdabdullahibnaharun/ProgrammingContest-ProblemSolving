#include<stdio.h>
int main(){
	int l,r;
	while(scanf("%d%d",&l,&r)){
		if(l==0 && r==0)
			break;
		printf("%d\n",l+r);
	}
	return 0;
}
