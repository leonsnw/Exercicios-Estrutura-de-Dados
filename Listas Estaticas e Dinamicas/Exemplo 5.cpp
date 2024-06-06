#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int x, y;
	struct lista *p;
}LISTA;

int main(void){
	int x, y;
	LISTA *l = NULL;
	
	// ENTRADA
	do{
		printf("Digite X: (-1 para sair)");
		scanf("%i",&x);
		//if (x==-1) break;
		printf("Digite Y: (-1 para sair)");
		scanf("%i",&y);
		if(x != -1 && y != -1){
			LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
			novo->x=x;
			novo->y=y;
			novo->p=l;
			l=novo;
		}
	}while (x !=-1 && y != -1);
	
	// SAÍDA
	
	while(l!=NULL){
		printf("x=%i y=%i\n",l->x,l->y);
		l=l->p;
	}
	
	return 0;
}