#include "stack.h"

void main(){
    int n;
    Pilha* pilha = criarPilha();
    /*
    printf("informe um numero inteiro: ");
    scanf("%d", &n);
    while(n != 0){
        push(pilha, n);
        printf("informe um numero inteiro (0 parara a leitura e nao sera processado): ");
        scanf("%d", &n);
    }
    printf("a pilha tem %d elementos\n", nElementos(pilha));
    printf("a somatoria de todos os valores da pilha: %d\n", somaPilha(pilha->topo));
    printPilha(pilha);
    printf("base da pilha: %d\n", primeiroPilha(pilha->topo));
    printf("topo da pilha: %d\n", ultimoPilha(pilha));
    
    printf("informa qual posicao deve ser retornada: ");
    if(n <= nElementos(pilha)){
        scanf("%d", &n);
        printf("a enesima posicao eh: %d\n", enesimoPilha(pilha, n));
    }
    else {
        printf("erro. posicao excede numero de registros na pilha\n");
    }
    
    printf("quantas vezes N aparece na pilha: informe N\t");
    scanf("%d", &n);
    printf("%d aparece %d vezes\n", n, quantasvezesNaparece(pilha, n));

    printf("primeira posicao que n aparece: informe n\t");
    scanf("%d", &n);
    if(primeiraPosicaoQueNAparece(pilha, n) == -1) printf("nao aparece\n");
    else printf("%d aparece na posicao %d\n", n, primeiraPosicaoQueNAparece(pilha, n));


    printf("o menor numero da pilha eh: %d\n", menor(pilha));
    */
    int decimal = 14;
    while(decimal/2 != 0 || decimal%2 != 0){
        push(pilha, decimal%2);
        decimal = decimal/2;
    }


    //esvazia a pilha:
    //if(pilha->topo != NULL) printf("os numeros informados na ordem inversa foram:\n");
    while(taVazia(pilha) != 1){
        printf("%d", pop(pilha));
    }

}