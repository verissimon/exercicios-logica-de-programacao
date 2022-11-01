#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcNodo {
  char nome[50];
  int cpf;
  float salario;
  int indice;
  struct funcNodo *next;
} FuncNodo;

void clear() {    
  while (getchar() != '\n' && getchar() != EOF);
}

void printar(FuncNodo * aux){
  printf("\n--------FUNCIONARIO %d--------\n", aux->indice);
  printf("nome: ");
  puts(aux->nome);
  printf("cpf: %d \n", aux->cpf);
  printf("salario: %.2f", aux->salario);
  printf("\n------------------------------\n");
}

void adicionaFunc(FuncNodo * pessoa) {
  FuncNodo * aux = pessoa;

  while(aux->next != NULL){
    aux = aux->next;
  }
  FuncNodo * novo = (FuncNodo *)malloc(sizeof(FuncNodo));
  aux->next = novo;
  novo->indice = (aux->indice) + 1;
  novo->next = NULL;
  printf("\n-----------INSIRA DADOS DO FUNCIONARIO %d-----------\n", novo->indice);
  printf("nome do funcionario %d: ", novo->indice);
  clear();
  fgets(novo->nome, sizeof(novo->nome), stdin);
  novo->nome[strlen(novo->nome)-1] = '\0';
  printf("cpf do funcionario %d: ", novo->indice);
  scanf("%d", &novo->cpf);
  printf("salario do funcionario %d: ", novo->indice);
  scanf("%f", &novo->salario);
  printf("------------------------------\n");
}

FuncNodo * criaPessoa(){
  FuncNodo * p = (FuncNodo *)malloc(sizeof(FuncNodo));
  printf("\n-----------INSIRA DADOS DO FUNCIONARIO 1-----------\n");

  printf("nome do funcionario: ");
  //clear();
  fgets(p->nome, sizeof(p->nome), stdin);
  p->nome[strlen(p->nome)-1] = '\0';
  printf("cpf do funcionario: ");
  scanf("%d", &p->cpf);
  printf("salario do funcionario? ");
  scanf("%f", &p->salario);
  printf("------------------------------\n");
  p->next = NULL;
  p->indice = 1;
  return p;
}

void printBusca(FuncNodo * pessoa, int indice){
  printf("\n");
  FuncNodo * aux = pessoa;
  
    while((indice != aux->indice) && (aux != NULL)){
      aux = aux->next;
    }
    if(aux == NULL) printf("nao há funcionario com esse indice\n");
    else {
      printar(aux);
    }
  
}

void printFunc(FuncNodo * pessoa) { //PRINTA TODOS OS FUNCIONARIOS INSERIDOS
  FuncNodo * aux = pessoa;
  while (aux != NULL) {
    printar(aux);
    aux = aux->next;
  }
}
void menu() {
  printf("----selecione operacao---- \n1: adicionar funcionario\n2: remover funcionario\n3: buscar funcionario\n0: sair\n");
}
