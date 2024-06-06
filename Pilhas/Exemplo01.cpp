/* Pilha dinâmica */

#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
	int n;
	struct pilha *p;
}PILHA;

int main(void){
	PILHA *inicio = NULL;
	int n;
	
	// entrada
	do{
		printf("Digite numero: (-1 para sair) ");
		scanf("%i",&n);
		PILHA *novo = (PILHA*) malloc(sizeof(PILHA));
		novo->n=n;
		novo->p=inicio;
		inicio=novo;
	}while (n!=-1);
	
	// saída
	while(inicio!=NULL){
		printf("%i\n",inicio->n);
		inicio=inicio->p;
	}
	
	return 0;
}