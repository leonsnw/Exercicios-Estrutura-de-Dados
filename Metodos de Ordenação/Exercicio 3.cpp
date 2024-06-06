/*
3. Faça um programa que cadastre 10 números reais, 
ordene-os usando o método selection sort e em seguida 
encontre o maior número e quantas vezes ele apareceu no vetor.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void entrada(float *x);
void saida(float *x);

void ordena(float *x);

int main(void){
	float n[TAM];
	int i;
	
	entrada(n);
	
	ordena(n);
	
	// processamento
	i=TAM-2;
	int cont=1;
	while(n[TAM-1]==n[i]){
		cont++;
		i--;
	}
	
	// saída
	printf("Os numeros sao: ");
	saida(n);
	printf("\nO maior numero e %f e apareceu %i vezes",
	n[TAM-1],cont);
	
	return 0;
}

void entrada(float *x){
	int i;	
	for(i=0;i<TAM;i++){
		printf("Digite o valor de %i: ",i+1);
		scanf("%f",&x[i]);
	}
}

void saida(float *x){
	int i;
	for(i=0;i<TAM;i++){
		printf("%f, ",x[i]);
	}
}

void ordena(float *x){
    int i, j, pos;
	float eleito, menor;

	for (i = 0; i < TAM-2; i++) {
        eleito = x[i];
        menor = x[i + 1];
        pos = i + 1;
        for (j = i + 2; j < TAM; j++) {
            if (x[j] < menor) {
                menor = x[j];
                pos = j;
            }
        }
        if (menor < eleito) {
            x[i] = x[pos];
            x[pos] = eleito;
        }
    }
}