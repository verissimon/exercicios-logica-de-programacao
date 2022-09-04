#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int num;
    struct node* prox;
} Nodo;

typedef struct {
    Nodo* anterior;
    Nodo* proximo;
} Lista;

Lista* criarLista(){
    Lista* lista = (Lista*)malloc(sizeof(Lista));
    lista->anterior = NULL;
    lista->proximo = NULL;
    return lista;
}