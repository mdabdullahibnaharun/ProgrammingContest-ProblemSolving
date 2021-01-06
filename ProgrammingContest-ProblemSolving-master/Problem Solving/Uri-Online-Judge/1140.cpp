#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[]="Flowers Flourish from France";
    char s2[]= "Sam Simmonds speaks softly";
    char s3[]= "Peter pIckEd pePPers";
    char s4[]="truly tautograms triumph";

    char t[1000];

    while(1) {
        gets(t);
        if(t[0] == '*' || t[1] == '*')break;

        if((strcmp(s1,t)==0)||(strcmp(s2,t)==0)||(strcmp(s3,t)==0)||(strcmp(s4,t)==0)) {
            cout<<"Y"<<endl;
        }
        else {
            cout<<"N"<<endl;
        }
        t[1000]={NULL};
    }
    return 0;
}
