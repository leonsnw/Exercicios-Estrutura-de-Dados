/*
1.	Elabore um algoritmo que leia uma sequência de números, armazenando-os
numa lista simplesmente encadeada e que, em seguida, verifique se a lista 
linear encadeada está ordenada. Suponha que a lista não contenha números
 repetidos.
R.:
*/
#include <stdio.h>

typedef struct lista{
	int num;
	struct lista *prox;
}LISTA;

LISTA* inserir (LISTA *l, int numero){
	LISTA *aux;
	LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
	novo->num = numero;
	novo->prox = NULL;
	
	if (l == NULL) {
        l = novo;
    } else {
        aux = l;
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
    return l;
}

int main (void){
	LISTA *L1 = NULL;
    LISTA *aux1, *aux2;
    int numero, ordem;
    
    printf("Digite os numeros da lista (-1 para parar): ");    
    scanf("%i",&numero);
    fflush(stdin);
    
    while (numero != -1) {
        L1 = inserir(L1, numero);
        // leitura do próximo número
	    scanf("%i",&numero);
	    fflush(stdin);
    }
    
	if (L1 == NULL) {
    	printf(" Lista vazia\n");
    } else {
        // Verificando se a lista está ordenada crescentemente
        ordem = 1;
        aux1 = L1;
        aux2 = L1->prox;
        while (aux1 != NULL && aux2 != NULL) {
            if (aux1->num > aux2->num) {
            	ordem = 0;
            }
            aux1 = aux2;
            aux2 = aux2->prox;
        }
        if (ordem == 0) {	// verificando se está ordenada decrescentemente
           	ordem = 1;
            aux1 = L1;
            aux2 = L1->prox;
            while (aux1 != NULL && aux2 != NULL) {
                if (aux1->num < aux2->num) {
                    ordem = 0;
                }
                aux1 = aux2;
                aux2 = aux2->prox;
            }
            if (ordem == 1) {
                printf("\n A lista esta ordenada\n");
            } else {
                printf("\n A lista nao esta ordenada\n");
            }
        } else {
            printf("\n A lista esta ordenada\n");
        }
    }
}
