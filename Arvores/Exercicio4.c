/*
4)	Faça um algoritmo que aplique o conceito de uma lista simplesmente encadeada 
circular na inserção e impressão de dados na lista.
R.:
*/

#include <stdio.h>

typedef struct lista{
	int num;
	struct lista *prox;
}LISTA;

int main (void){

    LISTA *inicio = NULL;
    LISTA *fim = NULL;
    LISTA *aux;

    int op;
    
    do {
    	system("cls");
        printf("\nMENU DE OPCOES\n");
        printf("1 - Inserir no inicio da lista\n");
        printf("2 - Consultar toda a lista\n");
        printf("3 - Sair\n");
        printf("Digite sua opcao: ");
        scanf("%i",&op);
        fflush(stdin);
        
        if (op < 1 || op > 3) {
            printf("Opcao invalida!!\n");
            getch();
        } else {
            if (op == 1) {
                printf("Digite o numero a ser inserido no inicio da lista: ");
                LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
                scanf("%i",&novo->num);
                fflush(stdin);
                if (inicio == NULL) {
                    inicio = novo;
                    fim = inicio;
                    fim->prox = inicio;
                } else {
                    novo->prox = inicio;
                    inicio = novo;
                    fim->prox = inicio;
                }
                printf("Numero inserido no inicio da lista!!");
            }
            if (op == 2) {
                if (inicio == NULL) {
                    printf("Lista vazia!!");
                } else {
                    printf("\nConsultando toda a lista\n");
                    aux = inicio;
                    do {
                        printf("%i ",aux->num);
                        aux = aux->prox;
                    } while (aux != inicio);
                }
                getch();
            }
        }

    } while (op != 3);	
}
