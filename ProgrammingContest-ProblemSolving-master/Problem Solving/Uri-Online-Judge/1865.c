#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    char ara[1000];
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        scanf("%s",ara);
        scanf("%d", &c);
        if(ara[0]=='T' && ara[1]=='h' && ara[2]=='o' && ara[3]=='r')
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
/*
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int x;
	int c;
	char name[15];
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		scanf("%s",name);
	    scanf("%d",&c);
		if(name[0]=='T' && name[1]=='h' && name[2]=='o' && name[3]=='r')
		   printf("Y\n");
		else
            printf("N\n");
		name[15]=0;
		c=0;
	}
	return 0;
}
*/

/*
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	int x;
	int c;
	char name[15];
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		scanf("%s",name);
	    scanf("%d",&c);
		if(name[0]=='T' && name[1]=='h' && name[2]=='o' && name[3]=='r')
		printf("Y\n");
		else printf("N\n");
		name[15]=0;
		c=0;
	}
	return 0;
}
 */
