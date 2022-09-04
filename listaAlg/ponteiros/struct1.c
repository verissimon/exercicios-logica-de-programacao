#include <stdio.h>
#include <string.h>

const int TAMANHO = 2;

typedef struct tipoPessoa{
    char nome[100];
    int idade;
    char cidade[100];

} pessoa;

void lerPessoa(pessoa *p){
    
    printf("seu nome\t");
    fflush(stdin);
    gets(p->nome);
    printf("sua idade\t");
    scanf("%d", &p->idade);
    printf("sua cidade\t");
    fflush(stdin);
    gets(p->cidade);
    printf("\n");
}

void escrevePessoa(pessoa *p){
    printf("nome: %s \n", p->nome);
    printf("idade: %d \n", p->idade);
    printf("cidade: %s \n\n", p->cidade);
}

void main(){
    pessoa vet[TAMANHO];

    for(int i=0; i<TAMANHO; i++){
        lerPessoa(&vet[i]);
    }
    for(int i=0; i<TAMANHO; i++){
        if(strcmp(vet[i].cidade, "cajazeiras")==0)    escrevePessoa(&vet[i]);
    }

}
