/* LISTA DINAMICA */
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int n;
	struct lista *p;
}LISTA;

int main(void){
	LISTA *l = NULL;
	int numero;
	
	// entrada
	do{
		printf("Digite um numero (-1 para sair): ");
		scanf("%i",&numero);
		if(numero != -1){
			LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
			novo->n = numero;
			novo->p = l;
			l=novo;
		}
	}while(numero != -1);
	
	// saida
	while(l != NULL){
		printf("l    = %p\n",l);
		printf("l->n = %i\n",l->n);
		printf("l->p = %p\n\n",l->p);
		l=l->p;
	}
	
	return 0;
}