#include<stdio.h>
#include<time.h>
int main(){
	int a,b,c,d,e;
	scanf("%d %d %d %d",&a,&c,&b,&d);
	if(c>d){
		d=(d+60);
		e=d-c;
		if(a==b){
			printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",e);
		}
		else if(a<b){
			printf("O JOGO DUROU % HORA(S) E %d MINUTO(S)\n",b-a-1,e);
		}
		else if(a>b){
			printf("O JOGO DUROU % HORA(S) E %d MINUTO(S)\n",(b+24)-a,e);
		}
	}
	else{
		if(c<d){
			e=d-c;
		}
		else{
			e=0;;
		}
		if(a==b){
			printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",e);
		}
		else if(a<b){
			printf("O JOGO DUROU % HORA(S) E %d MINUTO(S)\n",b-a-1,e);
		}
		else if(a>b){
			printf("O JOGO DUROU % HORA(S) E %d MINUTO(S)\n",(b+24)-a,e);
		}
	}
	return 0;
}
