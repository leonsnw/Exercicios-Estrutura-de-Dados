/* LISTA SIMLES CIRCULAR 

8,7,4,3 

*/
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int num;
	struct lista *prox;
}LISTA;

int main(void){
	LISTA *inicio = NULL, *fim = NULL;
	
	// LOOP 1
	LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
	novo->num = 8;
	novo->prox = NULL;
	inicio = novo;
	fim = novo;
	
	// LOOP 2
	novo = (LISTA*) malloc(sizeof(LISTA));
	novo->num = 7;
	fim->prox = novo;
	novo->prox = inicio;
	inicio = novo;
	
	// LOOP 3
	novo = (LISTA*) malloc(sizeof(LISTA));
	novo->num = 4;
	fim->prox = novo;
	novo->prox = inicio;
	inicio = novo;
	
	// LOOP 4
	novo = (LISTA*) malloc(sizeof(LISTA));
	novo->num = 3;
	fim->prox = novo;
	novo->prox = inicio;
	inicio = novo;


	do{
		printf("%p\t",inicio);
		printf("%i\t",inicio->num);
		printf("%p\n",inicio->prox);
		inicio=inicio->prox;
	}while(inicio != fim->prox);
	
	return 0;
}