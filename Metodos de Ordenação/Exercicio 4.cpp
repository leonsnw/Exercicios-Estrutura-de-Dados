/*
4. Faça um programa que cadastre 20 palavras em um vetor, 
ordene-os usando o método merge sort, em seguida encontre 
as palavras que começam vogais e mostre quais são elas.
R.:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

typedef struct{
	char texto[30];
}Palavra;

void entrada(Palavra *x);
void saida(Palavra *x);
void merge(Palavra *x, int inicio, int fim);
void intercala(Palavra *x, int inicio, int fim, int meio);

int main(void){
	Palavra bd[TAM];
	
	entrada(bd);
	merge(bd,0,TAM-1); // ordenação
	printf("\nPalavras ordenadas:\n");
	saida(bd);
	char vogais[]={"aeiouAEIOU"};
	int i;
	printf("\nPalavras com vogais:\n");
	for(i=0;i<TAM;i++){
		if(strchr(vogais,bd[i].texto[0])>0){
			printf("[%i] = %s\n",i,bd[i].texto);
		}
	}

	return 0;
}

void entrada(Palavra *x){
	int i;
	for(i=0;i<TAM;i++){
		printf("Digite a %i palavra: ",i+1);
		gets(x[i].texto);
		fflush(stdin);
	}
}

void saida(Palavra *x){
	int i;
	for(i=0;i<TAM;i++){
		printf("[%i]  = %s\n",i,x[i].texto);
	}
}

void merge(Palavra *x, int inicio, int fim) {
    int meio;
    if (inicio < fim) {
        meio = (inicio + fim) / 2;
        merge(x, inicio, meio);
        merge(x, meio + 1, fim);
        intercala(x, inicio, fim, meio);
    }
}

void intercala(Palavra *x, int inicio, int fim, int meio) {
    int poslivre = inicio, iniciovetor1 = inicio, iniciovetor2 = meio + 1, i;
    Palavra aux[TAM];
    while (iniciovetor1 <= meio && iniciovetor2 <= fim) {
        if (strcmp(x[iniciovetor1].texto, x[iniciovetor2].texto)<=0) {
            strcpy(aux[poslivre].texto,x[iniciovetor1].texto);
            iniciovetor1++;
        } else {
            strcpy(aux[poslivre].texto,x[iniciovetor2].texto);
            iniciovetor2++;
        }
        poslivre++;
    }
    for (i = iniciovetor1; i <= meio; i++) {
        strcpy(aux[poslivre].texto,x[i].texto);
        poslivre++;
    }
    for (i = iniciovetor2; i <= fim; i++) {
        strcpy(aux[poslivre].texto,x[i].texto);
        poslivre++;
    }
    for (i = inicio; i <= fim; i++) {
        strcpy(x[i].texto,aux[i].texto);
    }
}

