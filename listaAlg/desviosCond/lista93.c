//Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se
//o número lido é ou não um palíndromo
#include <stdio.h>
void main(){
    int num;
    scanf("%d", &num);
    if(num/1000 == num%10 && num%1000/100 == num%100/10){
        printf("eh palindromo");
    } else printf("nao eh palindromo");

}