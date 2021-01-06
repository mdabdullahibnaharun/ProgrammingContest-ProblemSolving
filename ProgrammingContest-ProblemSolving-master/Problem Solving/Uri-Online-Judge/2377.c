#include <stdio.h>
#include <math.h>
int main(){
	long int tam, dist, custokm, custoped;
	scanf("%ld %ld", &tam, &dist);
	scanf("%ld %ld", &custokm, &custoped);
	printf("%ld\n", (((tam / dist)* custoped)) + (tam * custokm));
	return 0;
}
