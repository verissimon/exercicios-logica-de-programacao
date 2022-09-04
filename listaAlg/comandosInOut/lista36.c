/*Escreva um programa que leia dois números inteiros e os armazene em duas variáveis
a e b. Após a leitura, o programa deve permutar os valores armazenados nas duas
variáveis. O programa deve imprimir os valores das duas variáveis antes e após a
permutação. */
#include <stdio.h>

void main(){
    int n1, n2, temporaria;
    scanf("%d%d", &n1, &n2);
    printf("antes: %d e %d\n", n1, n2);
    temporaria = n1;
    n1 = n2;
    n2 = temporaria;
    printf("depois: %d e %d", n1, n2);
}