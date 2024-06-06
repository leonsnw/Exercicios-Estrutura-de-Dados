/*
5. Construa um programa que gere um vetor 1000 números 
aleatórios mostre os números em tela e depois usando o 
método de ordenação quick sort ordene este vetor.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 1000

void gerar(int *vet);
void saida(int *vet);
void quicksort(int *vet, int ini, int fim);
int partition(int *vet, int ini, int fim);

int main (void){
	
	int v[TAM];
	
	printf("\n Numeros desordenados: \n");
	gerar(v);
	saida(v);
	
	printf("\n Numeros ordenados: \n");
	quicksort(v,0,TAM-1);
	saida(v);
	
}

void gerar(int *vet){
	int i;
	for(i=0;i<TAM;i++){
		vet[i]=rand()%TAM;
	}
}

void saida(int *vet){
	int i;
	for(i=0;i<TAM;i++){
		printf("%i\n",vet[i]);
	}
}

void quicksort(int vet[], int ini, int fim) {
    int meio;

    if (ini < fim) {
        meio = partition(vet, ini, fim);
        quicksort(vet, ini, meio);
        quicksort(vet, meio + 1, fim);
    }
}

int partition(int vet[], int ini, int fim) {
    int pivo, topo, i;
    pivo = vet[(fim+ini)/2];
    topo = ini;

    for (i = ini + 1; i <= fim; i++) {
        if (vet[i] < pivo) {
            vet[topo] = vet[i];
            vet[i] = vet[topo + 1];
            topo++;
        }
    }
    vet[topo] = pivo;
    return topo;
}
