// 8,7,4,3 e 9
/* Lista dupla */
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int num;
	struct lista *ant, *prox;
}LISTA;

int main(void){
	LISTA *inicio = NULL, *fim = NULL;
	
	// entrada
	LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
	// loop 1
	novo->num = 8;
	novo->ant = NULL;
	novo->prox = NULL;
	inicio = novo;
	fim = novo;
	
	// loop proximos (no fim da lista)
	novo = (LISTA*) malloc(sizeof(LISTA));
	novo->num = 7;
	novo->ant = fim;
	novo->prox = NULL;
	fim->prox = novo;
	fim = novo;
	
	novo = (LISTA*) malloc(sizeof(LISTA));
	novo->num = 4;
	novo->ant = fim;
	novo->prox = NULL;
	fim->prox = novo;
	fim  = novo;
	
	novo = (LISTA*) malloc(sizeof(LISTA));
	novo->num = 3;
	novo->ant = fim;
	novo->prox = NULL;
	fim->prox = novo;
	fim  = novo;
	
	// no inicio da lista
	novo = (LISTA*) malloc (sizeof(LISTA));
	novo->num = 9;
	novo->ant = NULL;
	novo->prox = inicio;
	inicio->ant = novo;
	inicio = novo;
	
	printf("FILA \n\n");
	while(inicio!=NULL){
		printf("%p\t",inicio);
		printf("%i\t",inicio->num);
		printf("%p\t",inicio->ant);
		printf("%p\n",inicio->prox);
		inicio=inicio->prox;
	}
	
	printf("\nPILHA \n\n");
	while(fim!=NULL){
		printf("%p\t",fim);
		printf("%i\t",fim->num);
		printf("%p\t",fim->ant);
		printf("%p\n",fim->prox);
		fim=fim->ant;
	}
	
	return 0;
}