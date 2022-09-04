#include <stdio.h>

int fat(int n){
    if(n<2) return 1;
    return n*fat(n-1);
}

void main(){
    int num;
    printf("insira o numero cujo fatorial sera calculado: ");
    scanf("%d", &num);
    printf("o fatorial de %d eh %d.\n", num, fat(num));
}