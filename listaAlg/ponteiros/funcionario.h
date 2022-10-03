#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcNodo {
  char nome[50];
  int cpf;
  float salario;
  struct funcNodo *next;
} FuncNodo;

typedef struct {
  FuncNodo *atual;
} Lista;

Lista *criarLista() {
  Lista * lista = (Lista *)malloc(sizeof(Lista));
  lista->atual = NULL;
  return lista;
}
void printFunc(Lista *lista) {
  if (lista->atual != NULL) {
    printf("%d \n", lista->atual->cpf);
    printf("%f \n", lista->atual->salario);
    puts(lista->atual->nome);
  }
}
void menu() {
  printf("----selecione operacao---- \n1: adicionar funcionario\n2: remover funcionario\n3: buscar funcionario\n0: sair\n");
}

void adicionaFunc(Lista *lista) {
  FuncNodo *novo = (FuncNodo *)malloc(sizeof(FuncNodo));
  printf("qual o cpf do novo funcionario? ");
  scanf("%d", &novo->cpf);
  fflush(stdin);
  gets(novo->nome);
  fflush(stdin);
  printf("qual o salario do novo funcionario? ");
  scanf("%f", &novo->salario);
  novo->next = NULL;
  lista->atual = novo;
}