/*Escreva um programa que leia um número inteiro N e imprima dos 10 primeiros
elementos da sua tabuada*/
#include <stdio.h>

void main(){
    int n, i=1;
    scanf("%d", &n);
    for(i; i<10; i++){
        printf("%d x %d = %d\n", i, n, n*i);
    }

}