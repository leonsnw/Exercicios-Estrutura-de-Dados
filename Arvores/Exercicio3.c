/*
3.	Faça um algoritmo que aplique o conceito de uma lista duplamente encadeada na inserção e impressão de dados na lista.
R.:
*/

#include <stdio.h>

typedef struct lista{
	int num;
	struct lista *prox;
	struct lista *ant;
}LISTA;


int main (void){
    LISTA *inicio = NULL;
    LISTA *fim = NULL;
    LISTA *aux;
    LISTA *anterior;
    int op;

	do {
		system("cls");
        printf("\nMENU DE OPCOES\n");
        printf("1 - Inserir na lista\n");
        printf("2 - Consultar a lista do inicio ao fim\n");
        printf("3 - Consultar a lista do fum ao início\n");
        printf("4 - Sair\n");
        printf("Digite sua opcao: ");
        scanf("%i",&op);
        fflush(stdin);
        
        if (op < 1 || op > 4) {
            printf("Opcao invalida!!");
        } else {
            if (op == 1) {
                printf("Digite o numero a ser inserido no inicio da lista: ");
                LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
                scanf("%i",&novo->num);
                fflush(stdin);
                if (inicio == NULL) {
                    inicio = novo;
                    fim = novo;
                    novo->prox = NULL;
                    novo->ant = NULL;
                } else {
                    novo->prox = inicio;
                    inicio->ant = novo;
                    novo->ant = NULL;
                    inicio = novo;
                }
            }
            if (op == 2) {
                if (inicio == NULL) {
                    printf("Lista vazia!!");
                } else {
                    printf("\nConsultando a lista do inicio ao fim\n");
                    aux = inicio;
                    while (aux != NULL) {
                        printf("%i ",aux->num);
                        aux = aux->prox;
                    }
                }
                getch();
            }
            if (op == 3) {
                if (inicio == NULL) {
                    printf("Lista vazia!!");
                } else {
                    printf("\nConsultando a lista do fim ao inicio\n");
                    aux = fim;
                    while (aux != NULL) {
                        printf("%i ",aux->num);
                        aux = aux->ant;
                    }
                }
                getch();
            }
        }

    } while (op != 4);
}


