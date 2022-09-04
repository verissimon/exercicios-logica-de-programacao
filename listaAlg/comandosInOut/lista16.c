//Escreva um programa que leia uma letra minúscula e imprima a sua letra maiúscula
//correspondente.
#include <stdio.h>

void main(){
    char letraMai;
    scanf("%c", &letraMai);
    char letramin = letraMai + 32;
    printf("%c", letramin);


}