/* LISTA DINAMICA */
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int n;
	struct lista *p;
}LISTA;

int main(void){
	LISTA *l = NULL;
	
	// entrada
	
	// 1º entrada
	LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
	printf("Digite numero: ");
	scanf("%i",&novo->n);
	novo->p=l;
	l=novo;
	
	// 2º entrada
	novo = (LISTA*) malloc(sizeof(LISTA));
	printf("Digite numero: ");
	scanf("%i",&novo->n);
	novo->p=l;
	l=novo;
	
	// 3º entrada
	novo = (LISTA*) malloc(sizeof(LISTA));
	printf("Digite numero: ");
	scanf("%i",&novo->n);
	novo->p=l;
	l=novo;
	
	// 4º entrada
	novo = (LISTA*) malloc(sizeof(LISTA));
	printf("Digite numero: ");
	scanf("%i",&novo->n);
	novo->p=l;
	l=novo;
	
	
	// saida
	printf("l    = %p\n",l);
	printf("l->n = %i\n",l->n);
	printf("l->p = %p\n\n",l->p);
	l=l->p;
	printf("l    = %p\n",l);
	printf("l->n = %i\n",l->n);
	printf("l->p = %p\n\n",l->p);
	l=l->p;
	printf("l    = %p\n",l);
	printf("l->n = %i\n",l->n);
	printf("l->p = %p\n\n",l->p);
	l=l->p;
	printf("l    = %p\n",l);
	printf("l->n = %i\n",l->n);
	printf("l->p = %p\n\n",l->p);
	
	return 0;
}