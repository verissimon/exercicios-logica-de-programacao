#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int num;
    struct node* prox;
} Nodo;

typedef struct stack{
    Nodo* topo;
} Pilha;

Pilha* criarPilha(){
    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->topo = NULL;
    return pilha;
}

void push(Pilha* pilha, int n){
    Nodo* novo = (Nodo*)malloc(sizeof(Nodo));
    novo->num = n;
    novo->prox = pilha->topo;
    pilha->topo = novo;
}

int pop(Pilha* pilha){
    Nodo* aux = pilha->topo;
    int resultado = aux->num;
    pilha->topo = aux->prox;
    free(aux);
    return resultado;
}

int taVazia(Pilha* pilha){
    if(pilha->topo == NULL) return 1;
    return 0;
}

int nElementos(Pilha* pilha){
    int cont = 0;
    Nodo* aux = pilha->topo;
    while(aux != NULL){
        cont++;
        aux = aux->prox;
    }
    return cont;
}

int somaPilha(Nodo* aux){
    if(aux == NULL) return 0;
    return aux->num + somaPilha(aux->prox);
}

void printPilha(Pilha *pilha){
    Nodo* aux = pilha->topo;
    printf("mostra os valores registrados sem alterar a pilha:\n");
    while(aux != NULL){
        printf("%d\n", aux->num);
        aux = aux->prox;
    }
    printf("\n");
}

int primeiroPilha(Nodo* aux){ //base da pilha
    if(aux->prox == NULL) return aux->num;
    return 0 + primeiroPilha(aux->prox); 
}

int ultimoPilha(Pilha* pilha){ //topo da pilha
    Nodo* aux = pilha->topo;
    return aux->num;
}

int enesimoPilha(Pilha* pilha, int posicao){
    int cont = nElementos(pilha);
    Nodo* aux = pilha->topo;
    while(cont != posicao){ //executa quando posicao de entrada for menor que total de elementos
        aux = aux->prox;
        cont--;
    }
    return aux->num;
}

int quantasvezesNaparece(Pilha *pilha, int n){
    int cont = 0;
    Nodo* aux = pilha->topo;
    while(aux != NULL){
        if(aux->num == n) cont++;
        aux = aux->prox;
    }
    return cont;
}

int primeiraPosicaoQueNAparece(Pilha* pilha, int n){
    int cont = nElementos(pilha);
    Nodo* aux = pilha->topo;
    while(aux != NULL){
        if(aux->num == n) return cont;
        aux = aux->prox;
        cont--;
    }
    return -1; //nao aparece
}

int menor(Pilha* pilha){
    Nodo* aux = pilha->topo;
    int m = aux->num;
    
    while(aux != NULL){
        if(aux->num < m) m = aux->num;
        aux = aux->prox;
    }
    return m;
}

