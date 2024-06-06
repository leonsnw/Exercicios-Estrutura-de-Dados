/* LISTA ESTÁTICA */
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef struct{
	char nome[50];
	int idade;
}Lista;

void entrada(Lista *n);
void saida(Lista *n);

int main(void){
	Lista bd[TAM];
	
	entrada(bd);
	saida(bd);
	
	return 0;
}

void entrada(Lista *n){
	int i;
	for(i=0;i<TAM;i++){
		printf("Digite o nome: ");
		gets(n[i].nome);
		fflush(stdin);
		printf("Digite idade: ");
		scanf("%i",&n[i].idade);
		fflush(stdin);
	}
}

void saida(Lista *n){
	int i;
	for(i=0;i<TAM;i++){
		printf("%s = %i\n",n[i].nome,n[i].idade);
	}
}