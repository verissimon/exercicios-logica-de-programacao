/*Escreva um programa que leia um número inteiro N e imprima todos os termos da
série de Fibonacci que são menores ou iguais a N*/

#include <stdio.h>

void main(){
    int n, fib0=0, fib1=1, fib=1;
    printf("insira N para que se imprima todos os termos da serie de Fibonacci que sao menores ou iguais a N: ");
    scanf("%d",&n);

    do{
        printf("%d ",fib);
        fib=fib0+fib1;
        fib0=fib1;
        fib1=fib;
    } while(fib<=n);
}