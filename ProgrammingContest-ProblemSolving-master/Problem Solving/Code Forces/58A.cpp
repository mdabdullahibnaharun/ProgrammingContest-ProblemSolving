#include<bits/stdc++.h>
using namespace std;
int main(){
	char* h="ahhellllloou";
	char s[200];
	scanf("%s",s);
	int i = strcmp(s,h);
	if(i==0){
		puts("YES");
	}
	else{
		puts("NO");
	}
	return 0;
}
