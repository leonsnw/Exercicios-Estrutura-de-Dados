/*
1.	Construa um algoritmo que use recursividade para 
resolver o problema matemático da seria de Pitágoras,
sabendo que a série é 1, 3, 6, 10, 15, 21, ...
*/
#include <stdio.h>
#include <stdlib.h>

int pit (int n);

int main (void){
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i",&numero);
	
	printf("Pitagoras e %i", pit(numero));
	
	return 0;
}

int pit (int n){
	if(n==1){
		return 1;
	}else{
		return n+pit(n-1);
	}
}
