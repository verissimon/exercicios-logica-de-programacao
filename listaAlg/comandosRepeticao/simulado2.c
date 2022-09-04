/*Escreva um programa em C que leia um número inteiro positivo N e identifique o
primeiro termo da série de Fibonacci (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...) que é maior
do que N*/
#include <stdio.h>

void main(){
    int n, fib0=0, fib1=1, fib=0;
    scanf("%d", &n);
    while(fib<=n){
        fib=fib0+fib1;
        fib0=fib1;
        fib1=fib;
        printf("%d, ", fib);
    }
    printf("\n%d eh o primeiro maior que %d\n", fib, n);
}