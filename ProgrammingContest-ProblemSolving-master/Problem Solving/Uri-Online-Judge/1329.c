#include <stdio.h>
int main(){
	while(1){
	int n,i,marry_point = 0,jhon_point = 0;
	scanf("%d",&n);
	if(n==0)
		break;
	for(i=0;i<n;i++){
		int value;
		scanf("%d",&value);
		if(value == 0)
			marry_point += 1;
		else
			jhon_point += 1;
	}
	printf("Mary won %d times and John won %d times\n",marry_point,jhon_point);
	marry_point=jhon_point=0;
	}
return 0;
}
