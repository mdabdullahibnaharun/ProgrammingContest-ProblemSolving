#include<bits/stdc++.h>
using namespace std;

int main() {
int n;
int temp[105];

	scanf("%d", &n);
	bool flag = true;
	for (int i = 1;i <= n;++i) {
		scanf("%d", &temp[i]);
		if (temp[i]) {
			flag = false;
		}
	}
	if (flag) {
		printf("EASY\n");
	}
	else {
		printf("HARD\n");
	}
	return 0;
}
