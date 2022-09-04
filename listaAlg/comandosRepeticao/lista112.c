/*Escreva um programa que leia um número inteiro N e imprima o enésimo termo da
série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...)*/
#include <stdio.h>

void main(){
    int n, fib0=0, fib1=1, fib;
    printf("insira o indice do termo da serie de fibonacci: ");
    scanf("%d",&n);
    int i=1;

    while(i<=n-1){
        fib=fib0+fib1;
        fib0=fib1;
        fib1=fib;
        i++;
    }
    if(n>1) 
        printf("%d",fib);
    else 
        if(n==1)
            printf("%d", fib1);
        else 
            if(n==0) 
                printf("%d", fib0);
            else 
                printf("invalido");
//    
}