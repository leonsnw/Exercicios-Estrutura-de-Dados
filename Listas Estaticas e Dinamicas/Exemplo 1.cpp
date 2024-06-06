/* LISTA ESTÁTICA */
#include <stdio.h>
#include <stdlib.h>

#define TAM 15

void entrada(int *n);
void saida(int *n);

int main(void){
	int idade[TAM];
	
	entrada(idade);
	saida(idade);
	
	return 0;
}

void entrada(int *n){
	int i;
	for(i=0;i<TAM;i++){
		printf("Digite %i idade: ",i+1);
		scanf("%i",&n[i]);
	}
}

void saida(int *n){
	int i;
	for(i=0;i<TAM;i++){
		printf("[%i] = %i\n",i,n[i]);
	}
}