/* Fila dinâmica */

#include <stdio.h>
#include <stdlib.h>

typedef struct fila{
	int n;
	struct fila *p;
}FILA;

int main(void){
	FILA *inicio = NULL, *fim = NULL;
	int n;
	
	// entrada
	do{
		printf("Digite numero: (-1 para sair) ");
		scanf("%i",&n);
		FILA *novo = (FILA*) malloc(sizeof(FILA));
		
		novo->n=n;		
		novo->p = NULL;
        if (inicio == NULL) {
            inicio = novo;
         	fim = novo;
        } else {
            fim->p = novo;
            fim = novo;
        }
		
	}while (n!=-1);
	
	// saída
	while(inicio!=NULL){
		printf("%i\n",inicio->n);
		inicio=inicio->p;
	}
	
	return 0;
}