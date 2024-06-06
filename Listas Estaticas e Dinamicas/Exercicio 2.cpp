/*
2)	Construa um algoritmo que contenha uma lista estática heterogênea
para guardar dados cadastrais de dez softwares, solicite ao usuário 
digitar, nome, fabricante, tipo de licença e versão.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
	char nome[50], fabricante[50], licenca[50], versao[50];
}Software;

void entrada(Software *n);
void saida(Software *n);

int main(void){
	Software bd[TAM];
	
	entrada(bd);
	saida(bd);
	
	return 0;
}

void entrada(Software *n){
	int i;
	for(i=0;i<TAM;i++){
		printf("Digite nome: ");
		gets(n[i].nome);
		fflush(stdin);
		printf("Digite fabricante: ");
		gets(n[i].fabricante);
		fflush(stdin);
		printf("Digite licenca: ");
		gets(n[i].licenca);
		fflush(stdin);
		printf("Digite versao: ");
		gets(n[i].versao);
		fflush(stdin);
	}
}

void saida(Software *n){
	int i;
	for(i=0;i<TAM;i++){
		printf("%s\t",n[i].nome);
		printf("%s\t",n[i].fabricante);
		printf("%s\t",n[i].licenca);
		printf("%s\n",n[i].versao);
	}
}
