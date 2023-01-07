#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Funcionario.h"

/* Tipo: Funcion�rio */
struct funcionario {
	char *nome;
	int idade;
	int matricula;
};
typedef struct funcionario Funcionario;

/********************************************************************************/
/******************* Fun��es exportadas *****************************************/

/* Fun��o cria - Aloca, inicializa e retorna um Funcion�rio */
Funcionario* cria_Funcionario(void){
   
   
   Funcionario* novo = (Funcionario*) malloc(sizeof(Funcionario));
   if(novo!=NULL){
       
    char nome[100];
    int mat=0, idade=0; 
    
	printf("Digite o nome do Funcionario: \t\t");
	//gets(nome);
	clear();
	fgets(nome, sizeof(nome), stdin);
	nome[strlen(nome)-1] = '\0';
	printf("\nDigite a matricula do Funcionario:  \t");
	scanf ("%d",&mat);
	printf("\nDigite a idade do Funcionario: \t\t");
	scanf ("%d",&idade);
		
	atualiza_nome_Func(novo, nome);
	atualiza_mat_Func(novo,mat);
	atualiza_idade_Func(novo,idade);
                     
	return novo;
   }
   return NULL;
        	
}

/* Fun��o atualiza nome - Insere um Novo nome para um Funcion�rio */
void atualiza_nome_Func(Funcionario* func,char *nome){
	
	func->nome =strdup(nome);
	//	func->nome = (char*) malloc(strlen(nome)+1);
    // strcpy(func->nome, nome);
	
}

/* Fun��o atualiza matricula - Insere uma Nova matr�cula para um Funcion�rio */
void atualiza_mat_Func(Funcionario* func, int val){

	func->matricula = val;
	
}

/* Fun��o atualiza idade - Atualiza a idade do Funcion�rio */
void atualiza_idade_Func(Funcionario* func, int val){
	
	  func->idade = val;
}

/* Fun��o libera - Libera um Funcion�rio da mem�ria */
void libera_Func(Funcionario* func){
	
	free(func);
}

/* Fun��o acessa nome - Retorna o nome do funcion�rio
  Retorno : String  */
char* acessa_nome_Func(Funcionario* func){
	
	return func->nome; 
}

/* Fun��o acessa matricula - Retorna a matr�cula do Funcion�rio
   Retorno: int */
int acessa_mat_Func(Funcionario* func){
	
	return func->matricula;
}

/* Fun��o acessa idade - Retorna a idade do Funcion�rio
  Retorno: int*/
int acessa_idade_Func(Funcionario* func){
	
	return func->idade;
}

void imprime_Func(Funcionario* func){
	
	printf("=======================================\n");
	printf("Nome :   %s \n", func->nome);
	printf("Matricula :  %d \n", func->matricula);
	printf("Idade :  %d \n\n", func->idade);
	
}

void clear() {    
  while (getchar() != '\n' && getchar() != EOF);
}

int preenche_Func(Funcionario* func){
    
    char nome[100];
    int mat=0, idade=0; 
    
	printf("Digite o nome do Funcionario: \t\t");
	clear();
	fgets(nome, sizeof(nome), stdin);
	nome[strlen(nome)-1] = '\0';
	//scanf ("%s",nome);
	printf("\nDigite a matricula do Funcionario:  \t");
	scanf ("%d",&mat);
	printf("\nDigite a idade do Funcionario: \t\t");
	scanf ("%d",&idade);
		
	atualiza_nome_Func(func, nome);
	atualiza_mat_Func(func,mat);
	atualiza_idade_Func(func,idade);
	
	return 1;
}
