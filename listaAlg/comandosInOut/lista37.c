/*Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da
unidade de milhar, da centena, da dezena e da unidade*/
#include <stdio.h>

void main(){
    unsigned int numero;
    scanf("%d",&numero);
    printf("milhar: %d\n", numero/1000);
/*  tambem funciona e nao opera com %:
    printf("centena: %d\n", (numero -(numero/1000)*1000)/100);
    printf("dezena: %d\n", (numero -(numero/100)*100)/10);
    printf("unidade: %d\n", (numero -(numero/10)*10));
*/
    printf("centena: %d\n", (numero%1000)/100);
    printf("dezena: %d\n", (numero%100)/10);
    printf("dezena: %d\n", numero%10);
}