#include <stdio.h>
const int SIZE=5;
//quantas vezes o inteiro n aparece no vetor vet a partir da posicao [x]
int repeteVetor(int x, int n, int vet[SIZE]){
    if(x==SIZE-1 && vet[x]==n) return 1;
    if(x==SIZE-1) return 0;
    if(vet[x]==n) return 1+repeteVetor(x+1, n, vet);
    return repeteVetor(x+1, n, vet);
}

void main(){
    int vet[5]={1, 2, 4, 4, 4};
    printf("%d", repeteVetor(0, 4, vet)); //quantas vezes, a partir da posicao 0, aparece 4 em vet