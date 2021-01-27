#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int i,s,e,num,sum=1500;
		cin>>s>>e;
		for(i=1;i<=s;i++){
			cin>>num;
			sum+=num;
		}
		if(sum==e){
			printf("Correct\n");
		}
		else{
			printf("Bug\n");
		}
	}
	return 0;
}
