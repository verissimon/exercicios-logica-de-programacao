#include <stdio.h>
#include <stdlib.h>

#include  "Funcionario.h"  //Usa o Tipo Funcionario
#include "ListaFuncionario.h"


struct lista {
	Funcionario* no; 
	struct lista* prox;
};
typedef struct lista ListaFuncionario;

/* Fun��o cria Lista- Aloca e retorna uma Lista de Funcion�rios */
ListaFuncionario* lista_cria (void){

return NULL;

}

/* Fun��o insere no inicio - Insere um Novo Funcion�rio no inicio da Lista */
ListaFuncionario* lista_insere_inicio (ListaFuncionario* list, Funcionario* func){
	
	ListaFuncionario* novo = (ListaFuncionario*) malloc(sizeof(ListaFuncionario));
	if(novo!=NULL){
	
	 novo->no = func;
	 novo->prox = list;
	 	
 	 return novo;
   }else printf("N�o foi possivel alocar espaco de memoria para o novo no");
	
	return NULL;
}

/* Fun��o Lista Vazia- Testa de a Lista est� vazia  */
int lista_vazia (ListaFuncionario* list){
	return (list == NULL);

}

/* Fun��o busca- busca um Funcionario na lista */
Funcionario* busca(ListaFuncionario* lst, int v){
	
	ListaFuncionario* p;
	for (p=lst; p!=NULL; p = p->prox) {
		if (acessa_mat_Func(p->no) == v)  //compara as matr�culas
			return p->no;	
    }
     printf("Valor nao encontrado na lista!\n");
    return NULL; /* n�o achou o elemento */
}

/* Fun��o Remove - Remove um Funcion�rio da Lista */
ListaFuncionario* lista_remove(ListaFuncionario* list, int val){
	
ListaFuncionario* a = NULL; /* ponteiro para elemento anterior */
ListaFuncionario* p = list; /* ponteiro para percorrer a lista */

/* procura elemento na lista, guardando anterior */
while (p != NULL && acessa_mat_Func(p->no) != val) {
	a = p;
	p = p->prox;
}
/* verifica se achou elemento */
if (p == NULL){
   
   printf("\nValor nao encontrado na lista!\n");
   return list; /* n�o achou: retorna lista original */
   
}
/* retira elemento */
if (a == NULL)
{ /* retira elemento do inicio */
     list = p->prox;
	 printf("\nFuncionario Removido com sucesso!\n");
 }
else { /* retira elemento do meio da lista */

     a->prox = p->prox;
     printf("\nFuncionario Removido com sucesso!\n\n\n");
}
   free(p);
   return list;
   
}

/* Fun��o Imprime - Imprime uma Lista de Funcion�rios*/
void lista_imprime (ListaFuncionario* list){
	
	if(list!=NULL){

	ListaFuncionario* p;
	for (p = list; p != NULL; p = p->prox)
	       imprime_Func(p->no);
	       
	}else printf("A lista est� vazia!\n");
}

ListaFuncionario* lista_libera (ListaFuncionario* list){
	
	ListaFuncionario* p = list;
  while (p != NULL) {
     ListaFuncionario* t = p->prox;   /* guarda refer�ncia p/ pr�x. elemento */
     free(p->no);  /* libera o Funcion�rio apontada por p */
	 free(p); /* libera a mem�ria apontada por p */
     p = t; /* faz p apontar para o pr�ximo */
     }
     return NULL;
}
