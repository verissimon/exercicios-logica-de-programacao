/*Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi
considerado que N=5*/
#include <stdio.h>
void main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=n-i; j>0; j--){
        printf("*");
        }
        printf("\n");
    }
}