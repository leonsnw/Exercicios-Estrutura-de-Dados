/*
1. Faça um programa que cadastre o nome e o salário de 10 
funcionário, liste todos os dados dos funcionários das 
seguintes formas: (use o Bubble sort)
a) em ordem crescente de salário;
b) em ordem decrescente de salário;
c) em ordem alfabética;	
R.:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3

typedef struct{
	char nome[50];
	float salario;
}Funcionario;

void entrada(Funcionario *a);
void saida(Funcionario *a);
void ordena(Funcionario *x, int opcao);

int main (void){
	Funcionario bd[TAM];
	
	entrada(bd);
	printf("Em ordem crescente de salario\n");
	ordena(bd,1);
	saida(bd);
	printf("Em ordem decrescente de salario\n");
	ordena(bd,2);
	saida(bd);
	
	return 0;
}

void entrada(Funcionario *a){
	int i;
	for(i=0;i<TAM;i++){
		printf("Digite o nome: ");
		gets(a[i].nome);
		fflush(stdin);
		printf("Digite o salario: ");
		scanf("%f",&a[i].salario);
		fflush(stdin);
	}
}

void saida(Funcionario *a){
	int i;
	for(i=0;i<TAM;i++){
		printf("%s\t%.2f\n",a[i].nome,a[i].salario);
	}
}

void ordena(Funcionario *x, int opcao){
	Funcionario aux;
	int n, i, troca;
	
	switch(opcao){
		case 1:
			// Em ordem crescente de salario
			n = 1;
		    troca = 1;

		    while (n <= TAM && troca == 1) {
		        troca = 0;
		        for (i = 0; i < TAM-1; i++) {
		            if (x[i].salario > x[i + 1].salario) {
		                troca = 1;
		                aux = x[i];
		                x[i] = x[i + 1];
		                x[i + 1] = aux;
		            }
		        }
		        n++;
		    }
		    break;
		case 2:
			// Em ordem decrescente de salario
			n = 1;
		    troca = 1;

		    while (n <= TAM && troca == 1) {
		        troca = 0;
		        for (i = 0; i < TAM-1; i++) {
		            if (x[i].salario < x[i + 1].salario) {
		                troca = 1;
		                aux = x[i];
		                x[i] = x[i + 1];
		                x[i + 1] = aux;
		            }
		        }
		        n++;
		    }
		    break;
	}
}