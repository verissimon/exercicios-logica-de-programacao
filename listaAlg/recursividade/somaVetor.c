#include <stdio.h>
const int SIZE = 5;

int somaVetor(int n, int vet[SIZE]){
    if(n==SIZE-1) return vet[n];
    return vet[n]+somaVetor(n+1, vet);
}

void main(){
    int vet[5]={1, 2, 3, 4, 5};
    printf("%d", somaVetor(0, vet));
}