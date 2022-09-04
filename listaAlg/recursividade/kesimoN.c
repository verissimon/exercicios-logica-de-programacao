#include <stdio.h>

int kEsimo(int n, int k){
    if(n==0) return 0;
    if(k==1) return n%10;
    return kEsimo(n/10, k-1);
}

void main(){
    int n, k;
    printf("insira n e depois k: ");
    scanf("%d%d", &n, &k);
    printf("o kesimo termo de n da direita para a esquerda eh: %d", kEsimo(n, k));
}