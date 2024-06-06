/*
2. Faça um programa que cadastre 15 números inteiros, 
ordene-os usando o método insertion sort e em seguida 
encontre o menor número e quantas vezes ele apareceu no 
vetor.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void ordena(int *x);

int main(void){
	int n[TAM], i;
	
	for(i=0;i<TAM;i++){
		printf("Digite o valor de %i: ",i+1);
		scanf("%i",&n[i]);
	}
	
	ordena(n);
	
	// processamento
	i=1;
	int cont=1;
	while(n[0]==n[i]){
		cont++;
		i++;
	}
	
	// saída
	printf("Os numeros sao: ");
	for(i=0;i<TAM;i++){
		printf("%i, ",n[i]);
	}
	printf("\nO menor numero e %i e apareceu %i vezes",
	n[0],cont);
	
	return 0;
}

void ordena(int *x){
    int i, j, eleito;

	for (i = 1; i < TAM; i++) {
        eleito = x[i];
        j = i - 1;
        while (j >= 0 && x[j] > eleito) {
            x[j + 1] = x[j];
            j = j - 1;
        }
        x[j + 1] = eleito;
    }
}