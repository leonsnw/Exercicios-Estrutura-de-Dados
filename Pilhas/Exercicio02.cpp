/*
4)	Construa um algoritmo que contenha uma lista dinâmica 
heterogênea onde o usuário deverá informar quantidade de 
disciplinas que ele tem e os dados de cada disciplina como: 
sala, dia da semana, nome disciplina e semestre e depois o 
algoritmo deve imprimir estes dados em tela.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct{
	char sala[4], dia_semana[15], nome[30], semestre[5];
}Disciplina;

typedef struct lista{
	Disciplina n;
	struct lista *p;
}LISTA;

Disciplina entrada_disciplina(void);
LISTA* entrada_lista(LISTA *l, Disciplina n);
void saida_lista(LISTA *l);
void saida_disciplina(Disciplina n);

int main(void){
	char op;
	LISTA *l = NULL;
	
	do{
		system("cls");
		printf("1 - Entrada de disciplina\n");
		printf("2 - Lista das disciplinas\n");
		printf("3 - Sair\n\n");
		printf("Digite um opcao: ");
		scanf("%c",&op);
		fflush(stdin);
		
		switch(op){
			case '1':
				l=entrada_lista(l,entrada_disciplina());
				printf("Disciplina cadastrada\n");
				break;
				
			case '2':
				saida_lista(l);
				break;
				
			case '3':
				break;
				
			default:
				printf("Erro! Opcao invalida\n");
		}
		if(op!='3'){
			printf("Pressione alguma tecla\n");
			getch();
		}
	}while(op!='3');
	
	return 0;
}

Disciplina entrada_disciplina(void){
	Disciplina a;
	
	system("cls");
	printf("Digite a sala: ");
	gets(a.sala);
	fflush(stdin);
	printf("Digite o dia da semana: ");
	gets(a.dia_semana);
	fflush(stdin);
	printf("Digite o nome da disciplina: ");
	gets(a.nome);
	fflush(stdin);
	printf("Digite o semestre: ");
	gets(a.semestre);
	fflush(stdin);
	
	return a;
}

LISTA* entrada_lista(LISTA *l, Disciplina n){
	LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
	novo->n=n;
	novo->p=l;
	return novo;
}

void saida_lista(LISTA *l){
	system("cls");
	printf("SALA\tDIA\tNOME\tSEMESTRE\n");
	printf("--------------------------\n");
	while(l!=NULL){
		saida_disciplina(l->n);
		l=l->p;
	}
}

void saida_disciplina(Disciplina n){
	printf("%s\t",n.sala);
	printf("%s\t",n.dia_semana);
	printf("%s\t",n.nome);
	printf("%s\n",n.semestre);
}