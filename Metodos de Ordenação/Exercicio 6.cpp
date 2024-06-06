
/*
6. Elabore um programa que gere uma combinação de duas letras 
em um vetor de 100 posições, usando o método de ordenação quick 
sort ordene este vetor de letras e mostre na tela.
R.:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

typedef struct{
	char ve[4];
}Letras;

void gerar(Letras *vet);
void saida(Letras *vet);
void quicksort(Letras *vet, int ini, int fim);
int partition(Letras *vet, int ini, int fim);

int main (void){
	
	Letras v[TAM];
	
	printf("\n Letras desordenados: \n");
	gerar(v);
	saida(v);
	
	printf("\n Letras ordenados: \n");
	quicksort(v,0,TAM-1);
	saida(v);
	
}

void gerar(Letras *vet){
	int i;
	for(i=0;i<TAM;i++){
		vet[i].ve[0]=(char)(65+(rand()%26));
		vet[i].ve[1]=(char)(65+(rand()%26));
		vet[i].ve[2]=(char)(65+(rand()%26));
		vet[i].ve[3]='\0';
	}
}

void saida(Letras *vet){
	int i;
	for(i=0;i<TAM;i++){
		printf("%s\n",vet[i].ve);
	}
}

void quicksort(Letras *vet, int ini, int fim) {
    int meio;

    if (ini < fim) {
        meio = partition(vet, ini, fim);
        quicksort(vet, ini, meio);
        quicksort(vet, meio + 1, fim);
    }
}

int partition(Letras *vet, int ini, int fim) {
    int topo, i;
    Letras pivo;
    strcpy (pivo.ve, vet[(fim+ini)/2].ve);
    topo = ini;

    for (i = ini + 1; i <= fim; i++) {
        if (strcmp(vet[i].ve,pivo.ve)<0) {
            strcpy(vet[topo].ve,vet[i].ve);
            strcpy(vet[i].ve,vet[topo + 1].ve);
            topo++;
        }
    }
    strcpy(vet[topo].ve,pivo.ve);
    return topo;
}