#include <stdio.h>
#include <stdlib.h>

int fat(int n);

int main (void){
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i",&numero);
	
	printf("Fatorial do numero e %i",fat(numero));
	
	return 0;
}

int fat(int n){
	int i, r=1;
	
	for(i=n;i>=1;i--){
		r*=i;
	}
	
	return r;
}
